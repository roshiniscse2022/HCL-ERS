#include<iostream>
#include<cassert>
using namespace std;

int main(){
#ifdef __clang__
cout<<"Compiler: Clang "<<__clang_version__<<endl;
#elif defined(__GNUC__)
cout<<"Compiler: GCC "<<__VERSION__<<endl;
#else
cout<<"Compiler: Unknown"<<endl;
#endif

int x=10;
if(x!=10){
cout<<"Assert failed in "<<__FILE__<<" at line "<<__LINE__<<endl;
assert(false);
}

cout<<"Check passed in "<<__FILE__<<" at line "<<__LINE__<<endl;
}