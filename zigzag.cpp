#include<iostream>
#include<vector>
using namespace std;

int main(){
string s="PAYPALISHIRING";
int rows=3;
if(rows==1||rows>=s.size()){
cout<<s;
return 0;
}
vector<string>v(rows);
int row=0,dir=1;
for(char c:s){
v[row]+=c;
if(row==0)dir=1;
else if(row==rows-1)dir=-1;
row+=dir;
}
string ans="";
for(string x:v)ans+=x;
cout<<ans;
}