#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
vector<int>a={2,7,11,15};
int target=9;
unordered_map<int,int>m;
for(int i=0;i<a.size();i++){
int need=target-a[i];
if(m.count(need)){
cout<<m[need]<<" "<<i;
return 0;
}
m[a[i]]=i;
}
cout<<-1;
}