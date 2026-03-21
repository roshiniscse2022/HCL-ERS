#include<iostream>
using namespace std;

int main(){
string s="aaabbccccd",ans="";
for(int i=0;i<s.size();){
char ch=s[i];
int cnt=0;
while(i<s.size()&&s[i]==ch){
cnt++;
i++;
}
ans+=ch;
ans+=to_string(cnt);
}
cout<<ans;
}