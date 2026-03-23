#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

bool ok(vector<double>&a,int k,double len){
int cnt=0;
for(double x:a)cnt+=(int)(x/len);
return cnt>=k;
}

int main(){
vector<double>a={4.0,7.0,9.0};
int k=5;
double l=0,r=0;
for(double x:a)if(x>r)r=x;

for(int i=0;i<100;i++){
double m=(l+r)/2.0;
if(ok(a,k,m))l=m;
else r=m;
}

cout<<fixed<<setprecision(6)<<l;
}