#include <iostream>
#include <stack>
using namespace std;

class Queue{
stack<int>s1,s2;
public:
void enq(int x){s1.push(x);}
int deq(){
if(s2.empty())
while(!s1.empty()){s2.push(s1.top());s1.pop();}
int x=s2.top();s2.pop();return x;
}
};

int main(){
Queue q;
q.enq(1);q.enq(2);q.enq(3);
cout<<q.deq()<<" "<<q.deq();
}
