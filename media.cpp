#include<iostream>
#include<vector>
#include<memory>
using namespace std;

class Media{
public:
virtual void play()=0;
virtual ~Media(){
cout<<"Media destroyed"<<endl;
}
};

class Audio:public Media{
public:
void play()override{
cout<<"Playing Audio"<<endl;
}
~Audio(){
cout<<"Audio destroyed"<<endl;
}
};

class Video:public Media{
public:
void play()override{
cout<<"Playing Video"<<endl;
}
~Video(){
cout<<"Video destroyed"<<endl;
}
};

int main(){
vector<unique_ptr<Media>>list;
list.push_back(make_unique<Audio>());
list.push_back(make_unique<Video>());
list.push_back(make_unique<Audio>());

for(auto&x:list)x->play();

return 0;
}