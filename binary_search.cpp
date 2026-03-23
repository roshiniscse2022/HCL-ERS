#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>&a,int l,int r,int x){
if(l>r)return-1;
int m=(l+r)/2;
if(a[m]==x)return m;
if(x<a[m])return bs(a,l,m-1,x);
return bs(a,m+1,r,x);
}

int main(){
vector<int>a={1,3,5,7,9,11};
cout<<bs(a,0,a.size()-1,7);
}