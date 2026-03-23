#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a={3,1,7,5};
int target=8;
int n=a.size();
bool found=false;

for(int mask=0;mask<(1<<n);mask++){
int sum=0;
for(int i=0;i<n;i++){
if(mask&(1<<i))sum+=a[i];
}
if(sum==target){
found=true;
for(int i=0;i<n;i++){
if(mask&(1<<i))cout<<a[i]<<" ";
}
cout<<endl;
}
}

if(!found)cout<<"No subset";
}