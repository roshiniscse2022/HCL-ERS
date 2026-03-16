#include <iostream>
using namespace std;

class Order{
int id[9],qty[9];
public:
Order(){
for(int i=0;i<9;i++){id[i]=0;qty[i]=0;}
}
void addItem(int i,int pid,int q){
if(i>=0&&i<9){id[i]=pid;qty[i]=q;}
}
void display(){
for(int i=0;i<9;i++)
cout<<id[i]<<" "<<qty[i]<<endl;
}
};
int main(){
Order o;
for(int i=0;i<9;i++)o.addItem(i,100+i,i+1);
o.display();
}
