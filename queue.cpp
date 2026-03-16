#include <iostream>
using namespace std;

class CQueue{
int *a,f,r,n;
public:
CQueue(int s):n(s),f(-1),r(-1){a=new int[n];}
void enq(int x){
if((r+1)%n==f)return;
if(f==-1)f=0;
r=(r+1)%n;
a[r]=x;
}
void deq(){
if(f==-1)return;
if(f==r)f=r=-1;
else f=(f+1)%n;
}
void disp(){
if(f==-1)return;
int i=f;
while(true){
cout<<a[i]<<" ";
if(i==r)break;
i=(i+1)%n;
}
}
};

int main(){
CQueue q(5);
q.enq(1);q.enq(2);q.enq(3);q.deq();
q.enq(4);q.enq(5);q.disp();
}
