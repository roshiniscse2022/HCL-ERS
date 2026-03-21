#include<iostream>
#include<vector>
using namespace std;

int firstPos(vector<int>&a,int target){
int l=0,r=a.size()-1,ans=-1;
while(l<=r){
int m=(l+r)/2;
if(a[m]==target){
ans=m;
r=m-1;
}
else if(a[m]<target)l=m+1;
else r=m-1;
}
return ans;
}

int lastPos(vector<int>&a,int target){
int l=0,r=a.size()-1,ans=-1;
while(l<=r){
int m=(l+r)/2;
if(a[m]==target){
ans=m;
l=m+1;
}
else if(a[m]<target)l=m+1;
else r=m-1;
}
return ans;
}

int main(){
vector<int>a={5,7,7,8,8,10};
int target=8;
cout<<firstPos(a,target)<<" "<<lastPos(a,target);
}