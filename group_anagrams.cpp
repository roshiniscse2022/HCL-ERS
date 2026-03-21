#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

string norm(string s){
for(char& c:s)if(c>='A'&&c<='Z')c=c-'A'+'a';
string t="";
for(char c:s){
if((c>='a'&&c<='z')||(c>='0'&&c<='9'))t+=c;
}
sort(t.begin(),t.end());
return t;
}

int main(){
vector<string> a={"listen","silent","enlist","rat","tar","art"};
unordered_map<string,vector<string>> g;
for(string x:a)g[norm(x)].push_back(x);
for(auto& p:g){
for(string x:p.second)cout<<x<<" ";
cout<<endl;
}
}