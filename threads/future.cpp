#include<iostream>
#include<future>
using namespace std;

long long fact(int n){
long long ans=1;
for(int i=1;i<=n;i++)ans*=i;
return ans;
}

int main(){
future<long long> f=async(launch::async,fact,5);
cout<<f.get()<<endl;
}