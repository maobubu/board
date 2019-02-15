/*Goal: Practice creating classes and functions.
**Create a program that allows two users to
**play a 4x4 tic-tac-toe game.
*/
#ifndef _TicTacToeFunctions
#define _TicTacToeFunctions
#include <fstream>
#include "TicTacToeClasses.hpp"

void getUserNames(string &, string &);
void printBlankBoard();
void printTheBoard(Board);
void printUserPrompt(Board, string, char);
void printGameWinner(Board, string, string);
int  getUserResponse();
void checkResponse(Board&, char);
void writeTheBoard(Board);

using namespace std;
#endif
