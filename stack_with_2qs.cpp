#include<iostream>
#include<stack>
using namespace std;

class Editor{
string text;
stack<string> undoSt,redoSt;
public:
Editor(){undoSt.push("");}
void type(char c){
text+=c;
undoSt.push(text);
while(!redoSt.empty())redoSt.pop();
}
void backspace(){
if(!text.empty()){
text.pop_back();
undoSt.push(text);
while(!redoSt.empty())redoSt.pop();
}
}
void undo(){
if(undoSt.size()>1){
redoSt.push(undoSt.top());
undoSt.pop();
text=undoSt.top();
}
}
void redo(){
if(!redoSt.empty()){
text=redoSt.top();
undoSt.push(text);
redoSt.pop();
}
}
void print(){
cout<<text<<endl;
}
};

int main(){
Editor e;
e.type('a');e.type('b');e.type('c');
e.print();
e.undo();e.print();
e.undo();e.print();
e.redo();e.print();
e.backspace();e.print();
}