#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
vector<int>a={1,5,0,3,5};
set<int>s;
for(int x:a)if(x>0)s.insert(x);
cout<<s.size();
}