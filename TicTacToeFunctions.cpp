#include "TicTacToeFunctions.hpp"

void checkResponse(Board &boardIn, char input)
{   //take the reference because you want to change the object
    //check that the position selected is not already
    //selected
    int position;
    int userInput;
    do
    {
        position = getUserResponse();
        userInput = boardIn.setPosition(position, input);
        if(userInput == -1)
        {
            cout<<"That postition is taken.";
        }
    }while(userInput == -1);
}

void getUserNames(string &userX, string &userY)
{//get the user names
    std::cout<< "Name of user to be 'x' :";
    std::cin >>userX;
    std::cout<< "Name of user to be 'o' :";
    std::cin >>userY;
}

void printBlankBoard()
{//print a blank board, with numbered squares
    for(int i = 0; i <16; i++)
    {
        std::cout<<"|"<<i<<":";
        if(i <= 9)
            cout<<" ";
        if(i%4 == 3)
        {
            std::cout<<"|\n";
        }
    }
    cout<<"\n\n\n";
}

void printTheBoard(Board boardIn)
{//print the board with player moves
    printBlankBoard();

    for(int i = 0; i <16; i++)
    {
        std::cout<<"|"<<boardIn.getPositions()[i];
        if(i%4 == 3)
        {
            std::cout<<"|\n";
        }
    }
    cout<<"\n\n\n";
}

void writeTheBoard(Board boardIn)
{//print the board with player moves
    cout<<"\n\n";
    for(int i = 0; i <16; i++)
    {
        cout<<"|"<<boardIn.getPositions()[i];
        if(i%4 == 3)
        {
            cout<<"|\n";
        }
    }
    cout<<"\n\n\n";
}

void printUserPrompt(Board boardIn,string nameIn, char letter)
{//prompt for user input
    cout<<nameIn<<" where would you like to place an "<<letter<<"?: ";
    cout<<"\n\n";
 //prompt the remaining block
    cout << "remaining: ";
    for(int i = 0; i <16; i++)
    {
        if(boardIn.getPositions()[i] == '_') cout<<i<<" ";

    }
    cout<<"\n";
    cout<<" where would you like to place an "<<letter<<"?: ";
}

void printGameWinner(Board boardIn, string nameX, string nameO)
{//print the winner statement
    char winner;
    winner = boardIn.determineWinner();
    if(winner == 'x')
    {
        cout<<"Congrats "<<nameX<<" you won!\n\n";
    }
    if(winner == 'o')
    {
        cout<<"Congrats "<<nameO<<" you won!\n\n";
    }
}

int getUserResponse()
{//get the chosen user position, check that it is an integer
    //check that it is between 0 and 15 inclusive
    int position = -1;
    cout<<"Enter an integer between 0 and 15: ";
    std::cin>>position;

    while(position > 15 or position < 0 or !cin)
    {
        cin.clear();
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout<<"That is not a valid position\n";
        cout<<"Enter an integer between 0 and 15: ";
        cin.clear();
        cin>>position;
    }
    return position;
}



