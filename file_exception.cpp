#include<iostream>
#include<fstream>
using namespace std;

void openFile(string name){
ifstream fin(name);
if(!fin)throw string("Cannot open file");
cout<<"File opened";
fin.close();
}

int main(){
try{
openFile("data.txt");
}
catch(string msg){
cout<<msg;
}
}