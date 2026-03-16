#include <iostream>
using namespace std;

int main(){
int ch;
do{
cout<<"1.Add 2.Sub 0.Exit:";
cin>>ch;
if(ch==1)cout<<"Add\n";
if(ch==2)cout<<"Sub\n";
}while(ch!=0);
}
