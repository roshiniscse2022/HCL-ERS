#include <iostream>
#include <fstream>
using namespace std;

int main(){
fstream f("data.txt",ios::in);
int count=0;
string line;
while(getline(f,line))count++;
f.close();
f.open("data.txt",ios::app);
f<<"\nTotal lines "<<count;
f.close();
}
