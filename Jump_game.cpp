#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a={2,3,1,1,4};
int jump=0,end=0,far=0;
for(int i=0;i<a.size()-1;i++){
far=max(far,i+a[i]);
if(i==end){jump++;end=far;}
}
cout<<jump;
}