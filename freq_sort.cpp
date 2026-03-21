#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
if(a.second!=b.second)return a.second>b.second;
return a.first<b.first;
}

int main(){
vector<int>a={4,6,4,3,6,4,2,3,3,3};
unordered_map<int,int> m;
for(int x:a)m[x]++;
vector<pair<int,int>> v;
for(auto x:m)v.push_back(x);
sort(v.begin(),v.end(),cmp);
for(auto x:v)cout<<x.first<<" "<<x.second<<endl;
}