#include <iostream>
using namespace std;

class EncryptBox{
int privateKey;
friend void dumpForAudit(const EncryptBox&);
public:
EncryptBox(int k):privateKey(k){}
};
void dumpForAudit(const EncryptBox& e){
cout<<"Audit Key:"<<e.privateKey<<endl;
}
void normal(const EncryptBox& e){
// cout<<e.privateKey; // compile error
}

int main(){
EncryptBox e(12345);
dumpForAudit(e);
}
