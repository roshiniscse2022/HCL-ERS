#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Item{
int wt,val;
double ratio;
};

bool cmp(Item a,Item b){
return a.ratio>b.ratio;
}

int main(){
vector<int>wt={10,20,30};
vector<int>val={60,100,120};
int W=50;
int n=wt.size();
vector<Item>a;

for(int i=0;i<n;i++)a.push_back({wt[i],val[i],(double)val[i]/wt[i]});
sort(a.begin(),a.end(),cmp);

double ans=0;
for(int i=0;i<n;i++){
if(W>=a[i].wt){
ans+=a[i].val;
W-=a[i].wt;
}else{
ans+=a[i].ratio*W;
break;
}
}

cout<<ans;
}