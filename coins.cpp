#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>coin={1,2,5};
int amt=11;
vector<int>dp(amt+1,1000000);
dp[0]=0;

for(int i=1;i<=amt;i++){
for(int x:coin){
if(i>=x&&dp[i-x]+1<dp[i])dp[i]=dp[i-x]+1;
}
}

if(dp[amt]==1000000)cout<<-1;
else cout<<dp[amt];
}