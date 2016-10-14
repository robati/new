#include <iostream>
#include"game.cpp"


using namespace std;

int main(){
game g;
g.enterScore(5);
g.enterScore(4);
g.enterScore(10); 
g.enterScore(1);
g.enterScore(0);
g.enterScore(10);
g.enterScore(5);
g.enterScore(1);
g.enterScore(1);
g.enterScore(9);
g.enterScore(2);
g.enterScore(3);
g.enterScore(10);
g.enterScore(5);
g.enterScore(1);
g.enterScore(10);
g.addedFrame(1,2);

cout<<"score:"<<g.getfinalScore(); 

}
