#include"frame.cpp"
using namespace std;

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
            	if(i<normalFrames){
			
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
