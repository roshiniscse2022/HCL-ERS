#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
vector<int>a={100,80,60,70,60,75,85};
int n=a.size();
vector<int>span(n);
stack<int>st;

for(int i=0;i<n;i++){
while(!st.empty()&&a[st.top()]<=a[i])st.pop();
if(st.empty())span[i]=i+1;
else span[i]=i-st.top();
st.push(i);
}

for(int x:span)cout<<x<<" ";
}