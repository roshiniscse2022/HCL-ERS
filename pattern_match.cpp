#include<iostream>
using namespace std;

int main(){
string text="helloworld";
string pat="world";
bool found=false;

for(int i=0;i+pat.size()<=text.size();i++){
int j=0;
while(j<pat.size()&&text[i+j]==pat[j])j++;
if(j==pat.size()){
cout<<"Found at "<<i<<endl;
found=true;
}
}

if(!found)cout<<"Not found";
}