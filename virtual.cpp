#include <iostream>
using namespace std;

class Device{
public:
int id;
Device(){id=101;}
};
class Phone:virtual public Device{};
class Camera:virtual public Device{};
class Smartphone:public Phone,public Camera{};
int main(){
Smartphone s;
cout<<s.id<<endl;
}
