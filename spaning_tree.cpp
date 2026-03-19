#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Edge{
int u,v,w;
};

bool cmp(Edge a,Edge b){
return a.w<b.w;
}

int findPar(vector<int>&par,int x){
if(par[x]==x)return x;
return par[x]=findPar(par,par[x]);
}

void join(vector<int>&par,vector<int>&rankv,int a,int b){
a=findPar(par,a);
b=findPar(par,b);
if(a!=b){
if(rankv[a]<rankv[b])swap(a,b);
par[b]=a;
if(rankv[a]==rankv[b])rankv[a]++;
}
}

int main(){
int n=4;
vector<Edge>e={{0,1,10},{0,2,6},{0,3,5},{1,3,15},{2,3,4}};
sort(e.begin(),e.end(),cmp);
vector<int>par(n),rankv(n,0);
for(int i=0;i<n;i++)par[i]=i;
int cost=0;
for(auto x:e){
if(findPar(par,x.u)!=findPar(par,x.v)){
join(par,rankv,x.u,x.v);
cost+=x.w;
}
}
cout<<cost;
}