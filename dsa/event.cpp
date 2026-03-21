#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
vector<string>log={"INFO","WARN","ERROR","INFO","ERROR","INFO","WARN"};
unordered_map<string,int>cnt;
string best="";
int mx=0;

for(string x:log){
cnt[x]++;
if(cnt[x]>mx){
mx=cnt[x];
best=x;
}
}

for(auto x:cnt)cout<<x.first<<" "<<x.second<<endl;
cout<<"Most common: "<<best;
}