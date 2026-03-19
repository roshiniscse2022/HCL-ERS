#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>a={1,8,6,2,5,4,8,3,7};
int l=0,r=a.size()-1,mx=0;
while(l<r){
int h=min(a[l],a[r]);
int w=r-l;
mx=max(mx,h*w);
if(a[l]<a[r])l++;
else r--;
}
cout<<mx;
}