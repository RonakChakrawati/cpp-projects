#include <iostream>
#include <vector>
#include <string>
using namespace std;

class game{
    public:
    void start();
    char board[3][3];
    void initializeBoard();
    void displayBoard();
    char currentPlayer = 'X';
    void makeMove(int choice);
    int takeInput();
    bool isValidMove(int choice);
    void switchPlayer();
    bool checkWin();
    bool checkDraw();
    void play();
    bool againOrNot();
    int scoreX = 0;
    int scoreO = 0;
};

void game :: start(void){
    cout << "\n";
    cout << "***************************************" << "\n";
    cout << "*****  LET'S PLAY  TIC  TAC  TOE  *****" << "\n";
    cout << "***************************************" << "\n \n";

};

void game :: initializeBoard(){
    char val = '1';
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            board[i][j] = val;
            val++;
        }
    }
}

void game :: displayBoard(){
    cout <<"\n";
    for(int i = 0; i < 3; i++){
        cout << " ";
        for(int j = 0; j < 3; j++){
            cout << board[i][j];
            if(j < 2) cout << " | ";
        }
        cout << "\n";

        if(i < 2) cout << "--- --- ---\n";
        
    }
    cout <<"\n";
}

int game :: takeInput(){
    int choice;
    while(true){
        cout << "PLAYER " << currentPlayer << " INPUT : ";
        if(!(cin >> choice)){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input (not a number). Try again.\n";
            continue;
        }
        if(choice > 0 && choice < 10 && isValidMove(choice)){
            return choice;
        }
        cout << "Invalid move. Try again.\n";
    }
}

bool game :: isValidMove(int choice){
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    if(board[row][col] == 'X' || board[row][col] == 'O') return false;
    else return true;
}

void game :: makeMove(int choice){
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    board[row][col] = currentPlayer;
}


void game :: switchPlayer(void){
    if(currentPlayer == 'X') currentPlayer = 'O';
    else currentPlayer = 'X';
}

bool game :: checkWin(void){
    if(board[0][0] == currentPlayer && board[1][0] == currentPlayer && board[2][0] == currentPlayer) return true;
    if(board[0][1] == currentPlayer && board[1][1] == currentPlayer && board[2][1] == currentPlayer) return true;
    if(board[0][2] == currentPlayer && board[1][2] == currentPlayer && board[2][2] == currentPlayer) return true;
    if(board[0][0] == currentPlayer && board[0][1] == currentPlayer && board[0][2] == currentPlayer) return true;
    if(board[1][0] == currentPlayer && board[1][1] == currentPlayer && board[1][2] == currentPlayer) return true;
    if(board[2][0] == currentPlayer && board[2][1] == currentPlayer && board[2][2] == currentPlayer) return true;
    if(board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) return true;
    if(board[2][0] == currentPlayer && board[1][1] == currentPlayer && board[0][2] == currentPlayer) return true;
    else return false;
}

bool game :: checkDraw(void){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] != 'X' && board[i][j] != 'O'){
                return false; 
            }
        }
    }
    return true; 
}

bool game :: againOrNot(){
    char input;
    while(true){
        cout << "WANT A NEW GAME ?? (Y/N) : ";
        cin >> input;

        if(input == 'Y' || input == 'y') return true;
        if(input == 'N' || input == 'n') return false;

        cout << "Invalid input. Try again.\n";
    }
}

void game :: play(){
    initializeBoard();
    while(true){
        displayBoard();  
        int choice = takeInput();
        makeMove(choice);
        if(checkWin()){
            displayBoard();
            if(currentPlayer == 'X') scoreX++;
            else scoreO++;
            cout << "PLAYER " << currentPlayer << " WINS!\n";
            cout << "Score = X : " << scoreX << " | O : " << scoreO << "\n";
            break;
        }
        if(checkDraw()){
            displayBoard();
            cout << "GAME DRAW!\n";
            cout << "Score = X : " << scoreX << " | O : " << scoreO << "\n";
            break;
        }
        switchPlayer();
    }
}

int main(){
    game g;
    g.start();
    while(true){
        g.play();
        if(!g.againOrNot()){
            cout << "Thanks for playing!\n";
            break;
        }
    }
    return 0;
}