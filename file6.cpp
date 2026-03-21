#include<iostream>
#include<fstream>
using namespace std;

struct Student{
int id;
char name[30];
float mark;
};

int main(){
Student a[2]={{1,"Asha",91.5f},{2,"Kiran",88.0f}};

ofstream out("stud.dat",ios::binary);
out.write((char*)a,sizeof(a));
out.close();

Student b[2];
ifstream in("stud.dat",ios::binary);
in.read((char*)b,sizeof(b));
in.close();

for(int i=0;i<2;i++)cout<<b[i].id<<" "<<b[i].name<<" "<<b[i].mark<<endl;
}