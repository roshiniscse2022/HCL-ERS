#include <iostream>
using namespace std;

int main(){
int a[]={10,20,30,40,50};
int n=5,target=30;
for(int i=0;i<n;i++){
if(a[i]==target){
cout<<"Found at "<<i;
return 0;
}
}
cout<<"Not Found";
}
