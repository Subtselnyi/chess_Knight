
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "chessDesk.h"

using namespace std;

int main()
{

    cout << "Subtselnyi Oleksandr Volodymyrovych" << endl;
    cout << "V : 20" << endl;
    cout << "L : B" << endl << endl;
    chessDesk* ch = new chessDesk();

    ch->input();

    cout<<"Routes to the corners:"<<endl<<endl;

    cout<<"route to (1A)"<<endl;
    if(ch->check(0,0)){
    ch->shag(0,0);
    ch->output();
    }

    cout<<"route to (1H)"<<endl;
    if(ch->check(0,7)){
    ch->shag(0,7);
    ch->output();
    }

    cout<<"route to (8A)"<<endl;
    if(ch->check(7,0)){
    ch->shag(7,0);
    ch->output();
    }

    cout<<"route to (8H)"<<endl;
    if(ch->check(7,7)){
    ch->shag(7,7);
    ch->output();
    }

    delete ch;
}
