#include <iostream>
#include <stack>
using namespace std;

int main(){
string a[]={"2","1","+","3","*"};
stack<int> st;
for(string s:a){
if(isdigit(s[0]))st.push(stoi(s));
else{
int b=st.top();st.pop();
int a=st.top();st.pop();
if(s=="+")st.push(a+b);
if(s=="-")st.push(a-b);
if(s=="*")st.push(a*b);
if(s=="/")st.push(a/b);
}
}
cout<<st.top();
}
