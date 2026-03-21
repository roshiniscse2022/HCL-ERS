#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a={1,2,1,3,5,6,4};
int l=0,r=a.size()-1;

while(l<r){
int m=(l+r)/2;
if(a[m]<a[m+1])l=m+1;
else r=m;
}

cout<<l;
}