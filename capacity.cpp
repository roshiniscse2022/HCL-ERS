#include <iostream>
using namespace std;

int main(){
int cap=2,size=0;
int* a=new int[cap];
for(int i=0;i<5;i++){
if(size==cap){
cap*=2;
int* b=new int[cap];
for(int j=0;j<size;j++)b[j]=a[j];
delete[] a;
a=b;
}
a[size++]=i;
}
for(int i=0;i<size;i++)cout<<a[i]<<" ";
delete[] a;
}
