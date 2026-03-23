#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a={1,1,2,2,3,4,4,5};
if(a.empty()){
cout<<0;
return 0;
}

int j=0;
for(int i=1;i<a.size();i++){
if(a[i]!=a[j]){
j++;
a[j]=a[i];
}
}

cout<<j+1<<endl;
for(int i=0;i<=j;i++)cout<<a[i]<<" ";
}