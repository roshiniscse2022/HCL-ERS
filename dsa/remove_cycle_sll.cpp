#include<iostream>
#include<queue>
using namespace std;

class Stack2{
queue<int> q1,q2;
public:
void push(int x){
q1.push(x);
}
void pop(){
while(q1.size()>1){
q2.push(q1.front());
q1.pop();
}
if(!q1.empty())q1.pop();
swap(q1,q2);
}
int top(){
while(q1.size()>1){
q2.push(q1.front());
q1.pop();
}
int ans=-1;
if(!q1.empty()){
ans=q1.front();
q2.push(q1.front());
q1.pop();
}
swap(q1,q2);
return ans;
}
};

int main(){
Stack2 s;
s.push(1);s.push(2);s.push(3);
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
}