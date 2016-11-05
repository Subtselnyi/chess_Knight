#include "chessDesk.h"


void chessDesk::input()
{
    char inp;
    cout<<"Leave input randomly? [y/n]"<<endl<<endl;
    cin>>inp;
    if (inp=='n' || inp=='N'){
    do{
    cout<<"Input number [1-8]"<<endl;
    cin>>this->x;
    }while (x<1 || x>8);
    do {
    cout<<"Input letter [a-h]"<<endl<<endl;
    cin>>inp;
    tolower(inp);
    this->y=(int)inp -97;
    }while ((int)inp<97 ||(int)inp>104);
    this->x--;
    }
    else {

    }
}

void chessDesk::shag(int cornerx, int cornery)
{
    if (this->ccount!=7){
        for (int i = 0; i < n1; i++)
        {
            this->x1 = this->x + this->possibleStep[i][0];
            this->y1 = this->y + this->possibleStep[i][1];
            if (((this->x1) >= 0) &&
                 ((this->x1) < 8)
                 && ((this->y1) >= 0) &&
                ((this->y1) < 8))
            {
                this->queuax[this->ccount]=this->x+1;
                this->queuay[this->ccount]=this->y+1;
                if ((this->x==cornerx)&&(this->y==cornery)){
                    if (this->ccount<this->minimalniy){
                        this->minimalniy=this->ccount;
                        this->newqu=this->ccount+1;
                        for (int j = 0; j < newqu; j++){
                            this->routex[j]=this->queuax[j];
                            this->routey[j]=this->queuay[j];
                        }
                    }
                    break;
                }
                this->ccount++;
                this->x=this->x1;
                this->y=this->y1;
                this->shag(cornerx,cornery);
                this->ccount--;
                this->x = this->x - this->possibleStep[i][0];
                this->y = this->y - this->possibleStep[i][1];
            }
        }
    }

};
void chessDesk::output(){
     for (int j = 0; j < this->newqu; j++)
    {
        cout<<this->routex[j]<<""<<char(this->routey[j]+64)<<"   ";
    }
    cout<<endl<<endl;
    this->ccount=0,this->minimalniy=8;

}

bool chessDesk::check(int x2, int y2){
    if (x2==x && y2==y) {
        cout<<"you are in corner"<<endl<<endl;
        return false;
    }
    else
        return true;
}


chessDesk::chessDesk()
{
    srand( time(NULL) );
    this->x=rand()%7;
    //srand( time(NULL) );
    this->y=rand()%7;
    cout<<"cell = "<<(this->x)+1<<char((this->y)+65)<<endl;
}

chessDesk::~chessDesk()
{
    //dtor
}
