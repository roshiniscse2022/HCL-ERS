#include <iostream>
#include <stack>
using namespace std;

int main(){
stack<string> undo,redo;
string text="";
undo.push(text);

text="A";undo.push(text);
text="AB";undo.push(text);
text="ABC";undo.push(text);

redo.push(undo.top());undo.pop();
cout<<"Undo:"<<undo.top()<<endl;

undo.push(redo.top());redo.pop();
cout<<"Redo:"<<undo.top()<<endl;
}
