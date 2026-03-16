#include <iostream>
#include <cmath>
using namespace std;

struct Node{
int d;Node*l,*r;
Node(int x):d(x),l(0),r(0){}
};

int height(Node* r){
if(!r)return 0;
return 1+max(height(r->l),height(r->r));
}

bool balanced(Node* r){
if(!r)return true;
int lh=height(r->l),rh=height(r->r);
return abs(lh-rh)<=1 && balanced(r->l) && balanced(r->r);
}

int main(){
Node* r=new Node(1);
r->l=new Node(2);
r->r=new Node(3);
cout<<height(r)<<endl;
cout<<(balanced(r)?"Balanced":"Not Balanced");
}
