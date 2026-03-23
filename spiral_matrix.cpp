#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<vector<int>>a={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int top=0,bot=a.size()-1,left=0,right=a[0].size()-1;

while(top<=bot&&left<=right){
for(int j=left;j<=right;j++)cout<<a[top][j]<<" ";
top++;
for(int i=top;i<=bot;i++)cout<<a[i][right]<<" ";
right--;
if(top<=bot){
for(int j=right;j>=left;j--)cout<<a[bot][j]<<" ";
bot--;
}
if(left<=right){
for(int i=bot;i>=top;i--)cout<<a[i][left]<<" ";
left++;
}
}
}