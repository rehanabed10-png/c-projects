#include <stdio.h>

char board[3][3];

void display() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf(" %c ",board[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int row,col;
    char player='X';

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j]='-';

    for(int turn=0;turn<9;turn++) {

        display();

        printf("Player %c Enter row and col: ",player);
        scanf("%d%d",&row,&col);

        board[row][col]=player;

        if(player=='X')
            player='O';
        else
            player='X';
    }

    display();

    return 0;
}