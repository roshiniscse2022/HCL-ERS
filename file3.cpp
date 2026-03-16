#include <iostream>
#include <fstream>
using namespace std;

class Employee{
public:
int id;
char name[20];
};

int main(){
Employee e1={1,"Alex"};
ofstream out("emp.bin",ios::binary);
out.write((char*)&e1,sizeof(e1));
out.close();
Employee e2;
ifstream in("emp.bin",ios::binary);
in.read((char*)&e2,sizeof(e2));
in.close();
cout<<e2.id<<" "<<e2.name;
}
