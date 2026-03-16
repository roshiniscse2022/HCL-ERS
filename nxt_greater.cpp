#include <iostream>
#include <stack>
using namespace std;

int main(){
int a[]={5,3,8,2,7};
int n=5,res[5];
stack<int> st;
for(int i=2*n-1;i>=0;i--){
while(!st.empty()&&st.top()<=a[i%n])st.pop();
res[i%n]=st.empty()?-1:st.top();
st.push(a[i%n]);
}
for(int i=0;i<n;i++)cout<<res[i]<<" ";
}
