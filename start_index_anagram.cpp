#include<iostream>
#include<vector>
using namespace std;

int main(){
string s="cbaebabacd",p="abc";
vector<int>need(26,0),win(26,0),ans;

for(char c:p)need[c-'a']++;

int k=p.size();
for(int i=0;i<s.size();i++){
win[s[i]-'a']++;
if(i>=k)win[s[i-k]-'a']--;
if(i>=k-1&&win==need)ans.push_back(i-k+1);
}

for(int x:ans)cout<<x<<" ";
}