#include <iostream>
#include <deque>
using namespace std;

int main(){
int a[]={1,3,-1,-3,5,3,6,7};
int n=8,k=3;
deque<int> dq;
for(int i=0;i<n;i++){
if(!dq.empty()&&dq.front()<=i-k)dq.pop_front();
while(!dq.empty()&&a[dq.back()]<=a[i])dq.pop_back();
dq.push_back(i);
if(i>=k-1)cout<<a[dq.front()]<<" ";
}
}
