#include <iostream>
using namespace std;

class Student{
public:
int id;
string name;
};

int main(){
int n;
cin>>n;
Student* s=new Student[n];
for(int i=0;i<n;i++){
cin>>s[i].id>>s[i].name;
}
for(int i=0;i<n;i++){
cout<<s[i].id<<" "<<s[i].name<<endl;
}
delete[] s;
}
