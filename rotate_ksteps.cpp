#include <iostream>
using namespace std;

void rev(int a[],int l,int r){
while(l<r)swap(a[l++],a[r--]);
}

int main(){
int a[]={1,2,3,4,5,6,7};
int n=7,k=3;
k%=n;
rev(a,0,n-1);
rev(a,0,k-1);
rev(a,k,n-1);
for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
