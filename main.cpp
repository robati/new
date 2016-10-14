
#include <iostream>
using namespace std;
class roll{
    int score;
     public:
        int getScore(){
            return score;

        };
        void setScore(int s){
            score=s;
        };
};

class frame{
    int rollCount;
    int frameScore;
    public:
        roll froll[2];
        int getrollCount(){
            return rollCount;
        };
        
        void setRollCount(int s){
            rollCount=s;
        };
        
        int getFrameScore(){
            frameScore=0;
            for(int i=0;i<rollCount;i++){
             frameScore+=froll[i].getScore();
            }
            return frameScore;
        };
};

class game
{
    int totalScore;
    int frameCount;
    public:
        frame gframe[12];
        int getScore(){
            totalScore=0;
            for(int i=0;i<frameCount;i++){
                    if(gframe[i].froll[0].getScore()==10){
                            cout<<"strike:"<<i+1<<endl;
                            if(gframe[i+1].getrollCount()==1){
                                 totalScore+=gframe[i+1].froll[0].getScore()+gframe[i+2].froll[0].getScore();
                            }
                            else{
                                totalScore+=gframe[i+1].getFrameScore();
                            }
                        }
                      else  if (gframe[i].getFrameScore()==10){
                          cout<<"spare:"<<i+1<<endl;
                            totalScore+=gframe[i+1].froll[0].getScore();
                        }
                        
                totalScore=totalScore+gframe[i].getFrameScore();
            }
            return totalScore;
        };
        void setFrameCount(int fc){
            frameCount=fc;
        }
};


int main(){
    game g;
    g.setFrameCount(6);
    g.gframe[0].setRollCount(2);
    g.gframe[0].froll[0].setScore(3);
    g.gframe[0].froll[1].setScore(5); //8
    g.gframe[1].setRollCount(1);
    g.gframe[1].froll[0].setScore(10);//10+4
    g.gframe[2].setRollCount(2);
    g.gframe[2].froll[0].setScore(1);
    g.gframe[2].froll[1].setScore(3); //4
     g.gframe[3].setRollCount(2);
    g.gframe[3].froll[0].setScore(5);
    g.gframe[3].froll[1].setScore(5); //10+7
    g.gframe[4].setRollCount(2);
    g.gframe[4].froll[0].setScore(7);
    g.gframe[4].froll[1].setScore(2); //9
    g.gframe[5].setRollCount(2);
    g.gframe[5].froll[0].setScore(1); //4
    g.gframe[5].froll[1].setScore(3);
	cout<<"score :"<<g.getScore();

}
