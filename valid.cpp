#include <iostream>
using namespace std;

class ValidAuditor;
class Valid{
private:
double balance;
friend class ValidAuditor;
public:
explicit Valid(double initial):balance(initial){}
void deposit(double amount,ValidAuditor& auditor);
void withdraw(double amount,ValidAuditor& auditor);
};
class ValidAuditor{
public:
bool validateDeposit(const Valid& v,double amount)const{
return amount>0;
}
bool validateWithdraw(const Valid& v,double amount)const{
return amount>0&&v.balance>=amount;
}
void audit(const Valid& v)const{
cout<<"[AUDIT] Balance="<<v.balance<<endl;
}
};
void Valid::deposit(double amount,ValidAuditor& auditor){
if(auditor.validateDeposit(*this,amount))balance+=amount;
}
void Valid::withdraw(double amount,ValidAuditor& auditor){
if(auditor.validateWithdraw(*this,amount))balance-=amount;
}
class Repo{
public:
void store(const Valid& v){
cout<<"Repo received Valid object address:"<<&v<<endl;
}
};

int main(){
Valid account(1000.0);
ValidAuditor auditor;
Repo repo;
account.deposit(500,auditor);
account.withdraw(300,auditor);
auditor.audit(account);
repo.store(account);
return 0;
}
