#include<iostream>
#include<vector>
using namespace std;

int main(){
string s="ababcabab";
vector<int>pi(s.size(),0);

for(int i=1;i<s.size();i++){
int j=pi[i-1];
while(j>0&&s[i]!=s[j])j=pi[j-1];
if(s[i]==s[j])j++;
pi[i]=j;
}

for(int x:pi)cout<<x<<" ";
}