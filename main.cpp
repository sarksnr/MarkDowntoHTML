#include<iostream>
#include<string>

int main(){

    char board[3][3]={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
    
    const char player1='X';
    const char player2='O';
    char currentPlayer=player1;
    int r = -1;
    int c = -1;

    for (int i=0; i<9; i++){
        std::cout<<board[i][0]<<"|"<<board[i][1]<<"|"<<board[i][2]<<std::endl;
        std::cout<<"Current Player is: "<<currentPlayer<<std::endl;
        std::cout<<"Enter row and column (0-2) separated by space: ";
        std::cin>>r>>c;

        board[r][c]=currentPlayer;
        currentPlayer = (currentPlayer==player1)?player2:player1;
    }

    return 0;
}
