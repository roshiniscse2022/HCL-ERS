#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream out("data.txt");
if(!out.is_open()){cout<<"Open failed";return 0;}
out<<"Hello File";
out.close();
ifstream in("data.txt");
string s;
getline(in,s);
cout<<s;
in.close();
}
