#include <iostream>
using namespace std;

enum constants{
	totalrolls=2,totalframes=12,allpins=10,normalFrames=10,firstRoll=0,lastRoll=1
};

enum frametype{
	strike,spare,openframe
};

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

class game
{
    int totalScore;
    int frameCount;
    int rollNumber;
    int frameNumber;
    frame gframe[totalframes];
    
  private:
        int strikeBonus(int frameNumber){

        	int nextFrameRollCount=gframe[frameNumber+1].getRollCount();
        	int bonus;
        	bonus=gframe[frameNumber+1].froll[firstRoll].getScore();

        	if(nextFrameRollCount==1)
        	
        	 bonus+=gframe[frameNumber+2].froll[firstRoll].getScore();
	
          	else if(nextFrameRollCount==2)
        	  bonus+=gframe[frameNumber+1].froll[lastRoll].getScore();

         return bonus;
        }

         int spareBonus(int frameNumber){

         	int bonus;
        	bonus=gframe[frameNumber+1].froll[firstRoll].getScore();
        	return bonus;
        }

        void computeBonus(int frameNumber){

             if(gframe[frameNumber].getType()==strike){
                cout<<"strike:"<<frameNumber<<endl;
                    totalScore+=strikeBonus(frameNumber);
                }

                        
            else  if (gframe[frameNumber].getType()==spare){
                cout<<"spare:"<<frameNumber<<endl;
                totalScore+=spareBonus(frameNumber);
            }
		}
      
        void error(){
        	cout<<"error"<<endl;
        }

        void setFrameCount(int fc){
            frameCount=fc;
        };

   
       
        void gotoNextFrame(){
        	frameNumber++;
        	rollNumber=firstRoll;
        }    
         void gotoNextRoll(){
        	rollNumber++;
        } 
            
  public:    
  	     game(int fc=10){
        	frameCount=fc;
        	rollNumber=0;
            frameNumber=0;
            totalScore=0;
        }
          int getfinalScore(){
            totalScore=0;
            for(int i=0;i<frameCount;i++){
            	if(i<normalFrames)
                  {
                   computeBonus(i);
                   totalScore+=gframe[i].getFrameScore();
               }
            }
     
            return totalScore;
        };
        

		 bool enterScore(int s){
        	cout<<"frame#"<<frameNumber<<"roll#"<<rollNumber<<"score="<<s<<endl;
        	gframe[frameNumber].froll[rollNumber].setScore(s);
        	gframe[frameNumber].checkFrameType();
        	
        	if(gframe[frameNumber].getType()==strike){
        		gframe[frameNumber].setRollCount(1);
        		 gotoNextFrame();
			}
			else if(rollNumber==lastRoll){
				if(gframe[frameNumber].getFrameScore()>allpins)
				error();
					
			gotoNextFrame();
			}
			else gotoNextRoll(); 
			if(s>allpins){
			error();
			return false;
			}
		    return true;
        }
        
		  void addedFrame(int R1=0,int R2=0){
        	int sum;
        	sum=0;
                if (gframe[normalFrames-1].getType()==strike){
                if(R1==allpins)
                	frameCount+=2;
                else frameCount++;
                
                        cout<<"your first reward"<<endl; 
                       	enterScore(R1);
                        cout<<"your second reward"<<endl;
                        enterScore(R2);
                       	
                }
                else if(gframe[normalFrames-1].getType()==spare){
                	frameCount++;
                    cout<<"your reward.."<<endl;
                    enterScore(R1);
        
                }
                
  
               
        };
};



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
