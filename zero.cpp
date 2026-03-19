#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
vector<int>a={4,2,-3,1,6};
int n=a.size(),k=4;
bool ok=false;
for(int i=0;i+k<=n;i++){
unordered_set<int>s;
int sum=0;
for(int j=i;j<i+k;j++){
sum+=a[j];
if(sum==0||s.count(sum)){
ok=true;
break;
}
s.insert(sum);
}
if(ok)break;
}
cout<<(ok?"Yes":"No");
}