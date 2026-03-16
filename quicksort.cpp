#include <iostream>
using namespace std;

int part(int a[],int l,int h){
int p=a[h],i=l-1;
for(int j=l;j<h;j++)
if(a[j]<p)swap(a[++i],a[j]);
swap(a[i+1],a[h]);
return i+1;
}

void quick(int a[],int l,int h){
if(l<h){
int p=part(a,l,h);
quick(a,l,p-1);
quick(a,p+1,h);
}
}

int main(){
int a[]={5,3,8,4,2};
quick(a,0,4);
for(int i:a)cout<<i<<" ";
}
