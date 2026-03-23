#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a={1,2,3,4,5,6,7,8};
int target=9;
int l=0,r=a.size()-1;

while(l<r){
int sum=a[l]+a[r];
if(sum==target){
cout<<a[l]<<" "<<a[r]<<endl;
l++;
r--;
}
else if(sum<target)l++;
else r--;
}
}