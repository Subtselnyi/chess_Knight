#ifndef CHESSDESK_H
#define CHESSDESK_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <ctime>

#define n1 8
#define n2 8
#define qu 8

using namespace std;

class chessDesk
{
        int ccount=0,minimalniy=8,x,y,x1,y1,newqu;
        int routex[qu],routey[qu],queuax[qu],queuay[qu];

        int possibleStep[n1][2] = {
            { -2, -1 }, { -1, -2 }, { 1, -2 }, { 2, -1 },
            { 2, 1 }, { 1, 2 }, { -1, 2 }, { -2, 1 }
        };
    public:
        void output();
        void shag(int,int);
        void input();
        bool check(int,int);
        chessDesk();
        virtual ~chessDesk();
    protected:

};

#endif // CHESSDESK_H
