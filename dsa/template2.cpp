#include<iostream>
#include<vector>
#include<concepts>
using namespace std;

template<class T>
concept MatrixType=requires(T a,T b){
{a+b}->same_as<T>;
{a*b}->same_as<T>;
};

template<MatrixType T>
class Matrix{
int rows,cols;
vector<vector<T>> a;
public:
Matrix(int r,int c):rows(r),cols(c),a(r,vector<T>(c,0)){}
void set(int i,int j,T val){
a[i][j]=val;
}
Matrix operator+(const Matrix& other)const{
Matrix ans(rows,cols);
for(int i=0;i<rows;i++)
for(int j=0;j<cols;j++)
ans.a[i][j]=a[i][j]+other.a[i][j];
return ans;
}
Matrix operator*(const Matrix& other)const{
Matrix ans(rows,other.cols);
for(int i=0;i<rows;i++){
for(int j=0;j<other.cols;j++){
ans.a[i][j]=0;
for(int k=0;k<cols;k++){
ans.a[i][j]=ans.a[i][j]+a[i][k]*other.a[k][j];
}
}
}
return ans;
}
void print()const{
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++)cout<<a[i][j]<<" ";
cout<<endl;
}
}
};

int main(){
Matrix<int> a(2,2),b(2,2);
a.set(0,0,1);a.set(0,1,2);a.set(1,0,3);a.set(1,1,4);
b.set(0,0,5);b.set(0,1,6);b.set(1,0,7);b.set(1,1,8);

Matrix<int> c=a+b;
Matrix<int> d=a*b;

c.print();
cout<<endl;
d.print();

Matrix<double> x(2,2),y(2,2);
x.set(0,0,1.5);x.set(0,1,2.5);x.set(1,0,3.5);x.set(1,1,4.5);
y.set(0,0,1.0);y.set(0,1,0.0);y.set(1,0,0.0);y.set(1,1,1.0);

Matrix<double> z=x+y;
cout<<endl;
z.print();

return 0;
}