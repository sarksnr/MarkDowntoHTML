#include<iostream>
#include<string>

int main(){

    char board[3][3]={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };

    for (int i=0; i<3; i++){
        std::cout<<board[i][0]<<"|"<<board[i][1]<<"|"<<board[i][2]<<std::endl;
    }

    return 0;
}
