#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
ifstream in("input.txt");
ofstream out("output.txt");
vector<int> v;
int x;
while(in>>x)v.push_back(x);
sort(v.begin(),v.end());
for(int n:v)out<<n<<" ";
in.close();out.close();
}
