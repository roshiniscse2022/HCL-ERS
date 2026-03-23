#include<iostream>
#include<vector>
using namespace std;

int main(){
string s="ADOBECODEBANC",t="ABC";
vector<int>need(256,0),have(256,0);
for(char c:t)need[c]++;

int req=t.size(),l=0,start=0,len=1e9;

for(int r=0;r<s.size();r++){
if(need[s[r]]>0){
have[s[r]]++;
if(have[s[r]]<=need[s[r]])req--;
}

while(req==0){
if(r-l+1<len){
len=r-l+1;
start=l;
}
if(need[s[l]]>0){
have[s[l]]--;
if(have[s[l]]<need[s[l]])req++;
}
l++;
}
}

if(len==1e9)cout<<"";
else cout<<s.substr(start,len);
}