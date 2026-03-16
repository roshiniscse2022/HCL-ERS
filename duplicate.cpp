#include <iostream>
using namespace std;

int main(){
int a[]={1,2,3,2,4,1,5};
int n=7;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]==a[j]){
cout<<a[i]<<endl;
break;
}}}}
