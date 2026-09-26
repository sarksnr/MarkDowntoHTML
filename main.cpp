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
    char winner=' ';
    char currentPlayer=player1; 
    int r = -1;
    int c = -1;

    for (int i=0; i<9; i++){
        std::cout<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<std::endl;
        std::cout<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<std::endl;
        std::cout<<board[2][0]<<"|"<<board[2][1]<<"|"<<board[2][2]<<std::endl;


        std::cout<<"Current Player is: "<<currentPlayer<<std::endl;
        
        if (winner != ' '){
            std::cout<<"Player "<<winner<<" wins!"<<std::endl;
            return 0;
        }

        while(true){
            std::cout<<"Enter row and column (0-2) separated by space: ";
            std::cin>>r>>c;
            if(r<0|| r>2 || c<0 || c>2){
                std::cout<<"Invalid input. Please enter row and column between 0 and 2."<<std::endl;

            }else if(board[r][c]!=' '){
                std::cout<<"Cell already occupied. Please choose another cell."<<std::endl;
            }else{
                break;
            }

            r=-1;
            c=-1;
            std::cin.clear();
            std::cin.ignore(1000, '\n');

        }

        board[r][c]=currentPlayer;
        currentPlayer = (currentPlayer==player1)?player2:player1;

        for(int r=0; r<3; r++){
            if(board[r][0]==board[r][1] && board[r][1]==board[r][2] && board[r][0]!=' '){
                std::cout<<"Player "<<board[r][0]<<" wins!"<<std::endl;
                winner = board[0][0];
                return 0;
            }
        }
        for(int c=0; c<3; c++){
            if(board[0][c]==board[1][c] && board[1][c]==board[2][c] && board[0][c]!=' '){
                std::cout<<"Player "<<board[0][c]<<" wins!"<<std::endl;
                winner = board[0][0];
                return 0;
            }

        if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' '){
                std::cout<<"Player "<<board[0][0]<<" wins!"<<std::endl;
                winner = board[0][0];
                return 0;
        }else if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' '){
                std::cout<<"Player "<<board[0][2]<<" wins!"<<std::endl;
                winner = board[0][0];
                return 0;
        }    


        }
    }

    if (winner != ' '){
        std::cout<<"It's a draw!"<<std::endl;
    }

    return 0;
    }