#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
vector<int>a={5,2,5,3,2,5,4,3,3};
unordered_map<int,int>m;
for(int x:a)m[x]++;
vector<pair<int,int>>v;
for(auto x:m)v.push_back({x.second,x.first});
sort(v.rbegin(),v.rend());
int k=2;
for(int i=0;i<k;i++)cout<<v[i].second<<" ";
}