#include<iostream>
#include<vector>
using namespace std;

int main(){
string a="heap",b="pea";
int n=a.size(),m=b.size();
vector<vector<int>>dp(n+1,vector<int>(m+1,0));

for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
}
}

int lcs=dp[n][m];
int del=n-lcs;
int ins=m-lcs;

cout<<"Deletions="<<del<<endl;
cout<<"Insertions="<<ins<<endl;
}