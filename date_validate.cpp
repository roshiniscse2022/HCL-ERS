#include<iostream>
using namespace std;

struct Date{
int day,month,year;
};

bool leap(int y){
return(y%400==0)||(y%4==0&&y%100!=0);
}

Date makeDate(int d,int m,int y){
int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
if(m<1||m>12||y<1)throw "Invalid date";
if(leap(y))days[2]=29;
if(d<1||d>days[m])throw "Invalid date";
return{d,m,y};
}

int main(){
try{
Date x=makeDate(29,2,2024);
cout<<x.day<<"/"<<x.month<<"/"<<x.year;
}
catch(const char* msg){
cout<<msg;
}
}