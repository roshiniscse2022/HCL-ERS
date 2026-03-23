#include<iostream>
#include<vector>
using namespace std;

int main(){
string a="abcde",b="ace";
int n=a.size(),m=b.size();
vector<vector<int>>dp(n+1,vector<int>(m+1,0));

for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
}
}

for(int i=0;i<=n;i++){
for(int j=0;j<=m;j++)cout<<dp[i][j]<<" ";
cout<<endl;
}
cout<<"LCS length="<<dp[n][m];
}