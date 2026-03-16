#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix{
int r,c;
int** m;
public:
Matrix(int r,int c):r(r),c(c){
m=new int*[r];
for(int i=0;i<r;i++)m[i]=new int[c]{0};
}
Matrix(initializer_list<initializer_list<int>> list){
r=list.size();c=list.begin()->size();
m=new int*[r];
int i=0;
for(auto& row:list){
m[i]=new int[c];
int j=0;
for(int v:row)m[i][j++]=v;
i++;
}
}
~Matrix(){
for(int i=0;i<r;i++)delete[] m[i];
delete[] m;
}
void display(){
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)cout<<m[i][j]<<" ";
cout<<endl;
}
}
};

int main(){
Matrix a(2,2);
Matrix b{{1,2},{3,4}};
b.display();
}
