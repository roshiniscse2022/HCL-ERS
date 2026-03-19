#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
int n=4;
vector<vector<pair<int,int>>>g(n+1);
g[1].push_back({2,1});
g[1].push_back({3,4});
g[2].push_back({3,2});
g[2].push_back({4,6});
g[3].push_back({4,3});
vector<int>d(n+1,1e9);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
d[1]=0;pq.push({0,1});
while(!pq.empty()){
auto t=pq.top();pq.pop();
int dist=t.first,u=t.second;
if(dist>d[u])continue;
for(auto x:g[u]){
int v=x.first,w=x.second;
if(d[u]+w<d[v]){
d[v]=d[u]+w;
pq.push({d[v],v});
}}
}
for(int i=1;i<=n;i++)cout<<d[i]<<" ";
}