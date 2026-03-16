#include <iostream>
using namespace std;

int main(){
int a[]={0,2,1,2,0,1,0};
int n=7,low=0,mid=0,high=n-1;
while(mid<=high){
if(a[mid]==0)swap(a[low++],a[mid++]);
else if(a[mid]==1)mid++;
else swap(a[mid],a[high--]);
}
for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
