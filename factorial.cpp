#include <iostream>
using namespace std;

int factRec(int n){
if(n<=1)return 1;
return n*factRec(n-1);
}
int factItr(int n){
int f=1;
for(int i=1;i<=n;i++)f*=i;
return f;
}
int main(){
int n=5;
cout<<factRec(n)<<endl;
cout<<factItr(n);
}
