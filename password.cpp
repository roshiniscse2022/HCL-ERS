#include <iostream>
using namespace std;

int main(){
  string Password;
  cout << "Enter the password" <<endl;
  cin >> Password;
  if (Password.length() >= 8){
    cout << "Password accepted!";
  }else{
    cout << "Password is too short";
  }
  return 0;
} 
