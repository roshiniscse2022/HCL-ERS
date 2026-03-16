#include <iostream>
using namespace std;

int main(){
string a="apple",b="banana",c="cherry";
string* arr[3]={&a,&b,&c};
for(int i=0;i<3;i++)
cout<<*arr[i]<<endl;
return 0;
}
