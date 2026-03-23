#include<iostream>
using namespace std;

class Logger{
Logger(){}
public:
static Logger& getInstance(){
static Logger obj;
return obj;
}
void logMessage(const string& msg){
cout<<"Log: "<<msg<<endl;
}
};

int main(){
Logger::getInstance().logMessage("Start");
Logger::getInstance().logMessage("Processing");
Logger::getInstance().logMessage("End");
}