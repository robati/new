#include"constants.cpp"
#include"roll.cpp"
using namespace std;
class frame{
    int rollCount;
    int frameScore;
    frametype type;
     void setType(frametype t){
            type=t;
        }
    public:
        roll froll[totalrolls];

        frame(){
        	rollCount=totalrolls;
        }

        int getRollCount(){
            return rollCount;
        };

        void setRollCount(int s){
            rollCount=s;
        };

        frametype getType(){
            return type;
        };

       

        int getFrameScore(){
        	
            frameScore=0;

            if(froll[firstRoll].getScore()==allpins){
            	setRollCount(1);
            }
            for(int i=0;i<rollCount;i++){
             frameScore+=froll[i].getScore();
         
            }
            return frameScore;
        };


         void checkFrameType(){

            if(froll[firstRoll].getScore()==allpins)
                setType(strike);

            else if (froll[firstRoll].getScore()+froll[lastRoll].getScore()==allpins)
               setType(spare);

            else setType(openframe);
        };
};
