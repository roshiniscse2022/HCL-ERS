#include<iostream>
using namespace std;
struct N{int v;N*l,*r;N(int x){v=x;l=r=NULL;}};
N*f=NULL,*s=NULL,*p=NULL;
void in(N*root){
if(!root)return;
in(root->l);
if(p&&p->v>root->v){if(!f)f=p;s=root;}
p=root;
in(root->r);
}
void fix(N*root){
in(root);
if(f&&s)swap(f->v,s->v);
}
void print(N*root){
if(!root)return;
print(root->l);cout<<root->v<<" ";print(root->r);
}
int main(){
N*r=new N(3);
r->l=new N(1);
r->r=new N(4);
r->r->l=new N(2);
fix(r);
print(r);
}