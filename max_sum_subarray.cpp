#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a={2,1,5,1,3,2};
int k=3;
int sum=0;

for(int i=0;i<k;i++)sum+=a[i];
int ans=sum;

for(int i=k;i<a.size();i++){
sum+=a[i]-a[i-k];
if(sum>ans)ans=sum;
}

cout<<ans;
}