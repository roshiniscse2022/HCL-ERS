#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a={10,9,2,5,3,7,101,18};
int n=a.size();
vector<int>dp(n,1);
int ans=1;
for(int i=1;i<n;i++){
for(int j=0;j<i;j++)
if(a[j]<a[i])dp[i]=max(dp[i],dp[j]+1);
ans=max(ans,dp[i]);
}
cout<<ans;
}