#include<iostream>
#include<vector>
using namespace std;

int crossSum(vector<int>&a,int l,int m,int r){
int left=-1e9,sum=0;
for(int i=m;i>=l;i--){
sum+=a[i];
if(sum>left)left=sum;
}
int right=-1e9;
sum=0;
for(int i=m+1;i<=r;i++){
sum+=a[i];
if(sum>right)right=sum;
}
return left+right;
}

int solve(vector<int>&a,int l,int r){
if(l==r)return a[l];
int m=(l+r)/2;
int x=solve(a,l,m);
int y=solve(a,m+1,r);
int z=crossSum(a,l,m,r);
return max(x,max(y,z));
}

int main(){
vector<int>a={-2,1,-3,4,-1,2,1,-5,4};
cout<<solve(a,0,a.size()-1);
}