#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node{
char ch;
int freq;
Node*left,*right;
Node(char c,int f){ch=c;freq=f;left=right=NULL;}
Node(int f,Node*l,Node*r){ch='#';freq=f;left=l;right=r;}
};

struct cmp{
bool operator()(Node*a,Node*b){
return a->freq>b->freq;
}
};

void print(Node*root,string code){
if(!root)return;
if(!root->left&&!root->right)cout<<root->ch<<" "<<code<<endl;
print(root->left,code+"0");
print(root->right,code+"1");
}

int main(){
vector<char>ch={'a','b','c','d','e','f'};
vector<int>fr={5,9,12,13,16,45};

priority_queue<Node*,vector<Node*>,cmp>pq;
for(int i=0;i<ch.size();i++)pq.push(new Node(ch[i],fr[i]));

while(pq.size()>1){
Node*x=pq.top();pq.pop();
Node*y=pq.top();pq.pop();
pq.push(new Node(x->freq+y->freq,x,y));
}

Node*root=pq.top();
print(root,"");
}