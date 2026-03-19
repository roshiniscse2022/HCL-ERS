#include<iostream>
#include<fstream>
#include<stdexcept>
using namespace std;

int main(){
try{
ifstream fin("data.txt");
if(!fin)throw runtime_error("File open error");
int a,b;
fin>>a>>b;
if(!fin)throw runtime_error("File read error");
if(b==0)throw runtime_error("Division by zero");
cout<<a/b;
fin.close();
}
catch(exception&e){
cout<<e.what();
}
}