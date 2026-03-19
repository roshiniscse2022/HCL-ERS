#include<iostream>
#include<stack>
using namespace std;
class Q{
stack<int>s1,s2;
public:
void push(int x){s1.push(x);}
int pop(){
if(s2.empty())while(!s1.empty()){s2.push(s1.top());s1.pop();}
if(s2.empty())return-1;
int v=s2.top();s2.pop();return v;
}};
int main(){
Q q;
q.push(10);q.push(20);q.push(30);
cout<<q.pop()<<endl;
cout<<q.pop()<<endl;
}