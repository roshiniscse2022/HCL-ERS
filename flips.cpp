#include<iostream>
#include<string>
using namespace std;

int solve(string s,int k,char first){
int n=s.size(),l=0,bad=0,ans=0;
for(int r=0;r<n;r++){
char need=((r%2)==0?first:(first=='0'?'1':'0'));
if(s[r]!=need)bad++;
while(bad>k){
char leftNeed=((l%2)==0?first:(first=='0'?'1':'0'));
if(s[l]!=leftNeed)bad--;
l++;
}
ans=max(ans,r-l+1);
}
return ans;
}

int main(){
string s="1001010";
int k=1;
cout<<max(solve(s,k,'0'),solve(s,k,'1'));
}