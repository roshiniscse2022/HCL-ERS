#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
vector<int>id={101,102,103,101,104,102,105,101};
unordered_map<int,int>cnt;

for(int x:id)cnt[x]++;

for(auto x:cnt){
if(x.second>1)cout<<x.first<<" ";
}
}