#ifndef _TICTACTOEClasses_
#define _TICTACTOEClasses_
/*The Class header file for main.cpp*/
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

class Board
{//the class tracks the game and the winner
    char positionsSelected[16];
    char winner;

public:
    /*This is another way of doing methods in classes.
    Instead of listing the methods in the class,
    Then defining them afterwards, the methods are
    defined within the class definition.
    The downside of this method is: it is not immediately
    clear what methods are in the class.
    */
    Board();
    char* getPositions(void);

    int setPosition(int gridNumber, char user);
    char checkRows();
    char checkColumns();
    char checkDiagonals();
    char determineWinner();
};
#endif


