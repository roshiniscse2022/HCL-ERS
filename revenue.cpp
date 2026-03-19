#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>band={2,3,4,5};
vector<int>rev={3,4,5,8};
int limit=5,n=band.size();
vector<int>dp(limit+1,0);
for(int i=0;i<n;i++){
for(int j=limit;j>=band[i];j--){
dp[j]=max(dp[j],dp[j-band[i]]+rev[i]);
}
}
cout<<dp[limit];
}