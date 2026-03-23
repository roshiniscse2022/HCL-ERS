#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a={1,2,1,0,1,1,0};
int k=4,l=0,sum=0,ans=0;

for(int r=0;r<a.size();r++){
sum+=a[r];
while(sum>k){
sum-=a[l];
l++;
}
if(r-l+1>ans)ans=r-l+1;
}

cout<<ans;
}