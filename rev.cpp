#include <iostream>
using namespace std;

int main(){
  string str;
  int len=0;
  cout << "Enter String:" ;
  cin >> str;
  while (str[len] != '\0') len++;
  cout<< "Length of String:" << len << endl;
  for(int i=len;i>=0;i--){
    if(str[i]>='a' && str[i]<='z'){
      str[i]=str[i]-32;
    }
    cout << str[i];
  }
  return 0;
}