#include <iostream>
using namespace std;

typedef struct{
int id;
float salary;
}Emp;
int main(){
Emp e={1,50000};
cout<<e.id<<" "<<e.salary;
}
