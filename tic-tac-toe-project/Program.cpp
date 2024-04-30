
#include <cmath>
#include <iostream>

using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player = 'X';
bool draw = false;

//To display the content of the board
void display_board(){
    cout<<"PLAYER - 1 [X]t PLAYER - 2 [O]\n\n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}

bool playerMove(){
    int choice;
    int row, column;
    char symbol ='\0';
    
    if (player == 'X') {
    cout<<"Player 1 turn (X)\n";
    symbol = 'X';
    }
    else if (player == 'O') {
    cout<<"Player 2 turn (O)\n";
    symbol = 'O';
    }
    cout<<"Please select a slot 1 - 9\n";
    cin>>choice;
    
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }
    
   if (symbol == 'X') 
    if (board[row][column]!='0'){
        board[row][column]=symbol;
    }
    
    if (symbol == 'O') 
    if (board[row][column]!='X'){
        board[row][column]=symbol;
    }
}


bool checkWin() {
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i]){
    cout<<player<<" wins\n";
    return true;
    }
    
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0]){
    cout<<player<<" wins\n";
    return true;
    }
    //Checking the game is in continue mode or not
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O'){
    if (player == 'X')
    player = 'O';
    else
    player = 'X'; 
    
    return false;
    }
    
        //Checking the if game already draw
    draw = true;
    return false;



}

int main()
{   bool status = false;

    do {
    display_board();
    playerMove();
    display_board();
    status = checkWin();
    cout<<status<<"\n";
    cout<<player<<"\n";
    } while (status == false);
    
    if (draw == true)
    cout<<"Draw\n";
}
