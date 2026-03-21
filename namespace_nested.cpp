#include<iostream>
using namespace std;

namespace Company{
namespace HR{
void displayPolicy(){
cout<<"Work 5 days a week";
}
}
}

int main(){
Company::HR::displayPolicy();
}