#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<pair<int,int>>a={{1,4},{2,5},{3,6},{7,9}};
vector<pair<int,int>>p;
for(auto x:a){p.push_back({x.first,1});p.push_back({x.second,-1});}
sort(p.begin(),p.end());
int cur=0,mx=0;
for(auto x:p){cur+=x.second;mx=max(mx,cur);}
cout<<mx;
}