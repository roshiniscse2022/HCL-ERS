#include <iostream>
using namespace std;

class MediaPlayer{
public:
virtual void play(){cout<<"Playing Media\n";}
};
class Audio:public MediaPlayer{
public:
void play(){cout<<"Playing Audio\n";}
};
class Video:public MediaPlayer{
public:
void play(){cout<<"Playing Video\n";}
};
int main(){
MediaPlayer* m;
Audio a;Video v;
m=&a;m->play();
m=&v;m->play();
}
