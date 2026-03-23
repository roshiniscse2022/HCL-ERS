#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a={2,3,2,4,4};
int ans=0;
for(int x:a)ans^=x;
cout<<ans;
}