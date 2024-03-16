#include <iostream>
using namespace std;

char board [3][5] = {
                        {'_','|','_','|','_'},  // [0] 0 - 2 - 4
                        {'_','|','_','|','_'},  // [1] 0 - 2 - 4
                        {' ','|',' ','|',' '}   // [2] 0 - 2 - 4
        };

class playData{
    private:

        char masterBoard [3] [5] = {
                                {'_','|','_','|','_'},  
                                {'_','|','_','|','_'},
                                {' ','|',' ','|',' '}
        };

        void modBoard(int move, bool eksBa){

        if (eksBa == true)
        {
            switch (move)
            {
            case 1:
                board[0][0] = 'X';
                break;
            case 2:
                board[0][2] = 'X';
                break;
            case 3:
                board[0][4] = 'X';
                break;
            case 4:
                board[1][0] = 'X';
                break;
            case 5:
                board[1][2] = 'X';
                break;
            case 6:
                board[1][4] = 'X';
                break;
            case 7:
                board[2][0] = 'X';
                break;
            case 8:
                board[2][2] = 'X';
                break;
            case 9:
                board[2][4] = 'X';
                break;
            default:
                break;
            }
        }
        else
        {
            switch (move)
            {
            case 1:
                board[0][0] = 'O';
                break;
            case 2:
                board[0][2] = 'O';
                break;
            case 3:
                board[0][4] = 'O';
                break;
            case 4:
                board[1][0] = 'O';
                break;
            case 5:
                board[1][2] = 'O';
                break;
            case 6:
                board[1][4] = 'O';
                break;
            case 7:
                board[2][0] = 'O';
                break;
            case 8:
                board[2][2] = 'O';
                break;
            case 9:
                board[2][4] = 'O';
                break;
            default:
                break;
            }
        }
        }
    public:
        void resetBoard(){
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    board[i][j] = masterBoard[i][j];
                }
            }
            
        }
        void printBoard(){
            cout << "       ";
            for (int i = 0; i < 3; i++)
            {
                for (int a = 0; a < 5; a++)
                {
                    cout << board[i][a];
                }
                cout << endl << "       ";
            }
        }
        void runModBoard(int move, bool eksBa){
            modBoard(move, eksBa);
        }
};

class moves: public playData{
    private:
        bool blue[3][3] = {
                            {false,false,false}, // [0] 0 1 2
                            {false,false,false}, // [1] 0 1 2
                            {false,false,false}  // [2] 0 1 2
        };
        bool red[3][3] = {
                            {false,false,false}, // [0] 0 1 2
                            {false,false,false}, // [1] 0 1 2
                            {false,false,false}  // [2] 0 1 2
        };
        void modAmbalanga(int move){
            switch (move)
            {
            case 1:
                red[0][0] = true;
                break;
            case 2:
                red[0][1] = true;
                break;
            case 3:
                red[0][2] = true;
                break;
            case 4:
                red[1][0] = true;
                break;
            case 5:
                red[1][1] = true;
                break;
            case 6:
                red[1][2] = true;
                break;
            case 7:
                red[2][0] = true;
                break;
            case 8:
                red[2][1] = true;
                break;
            case 9:
                red[2][2] = true;
                break;
            default:
                break;
            }
            runModBoard(move, true);
        }
        void modAsol(int move){
            switch (move)
            {
            case 1:
                blue[0][0] = true;
                break;
            case 2:
                blue[0][1] = true;
                break;
            case 3:
                blue[0][2] = true;
                break;
            case 4:
                blue[1][0] = true;
                break;
            case 5:
                blue[1][1] = true;
                break;
            case 6:
                blue[1][2] = true;
                break;
            case 7:
                blue[2][0] = true;
                break;
            case 8:
                blue[2][1] = true;
                break;
            case 9:
                blue[2][2] = true;
                break;
            default:
                break;
            }
            runModBoard(move, false);
        }
        void resetMoves(){
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    red[i][j] = false;
                    blue[i][j] = false;
                }
            }
            
        }
        int checkWin(){
            if (
                // horizontal
                (red[0][0] == true && red[0][1] == true && red[0][2] == true) ||
                (red[1][0] == true && red[1][1] == true && red[1][2] == true) ||
                (red[2][0] == true && red[2][1] == true && red[2][2] == true) ||
                // vertical
                (red[0][0] == true && red[1][0] == true && red[2][0] == true) ||
                (red[0][1] == true && red[1][1] == true && red[2][1] == true) ||
                (red[0][2] == true && red[1][2] == true && red[2][2] == true) ||
                // diagonal
                (red[0][0] == true && red[1][1] == true && red[2][2] == true) ||
                (red[0][2] == true && red[1][1] == true && red[2][0] == true) 
            )
            {
                return 1;
            }
            else if (
                // horizontal
                (blue[0][0] == true && blue[0][1] == true && blue[0][2] == true) ||
                (blue[1][0] == true && blue[1][1] == true && blue[1][2] == true) ||
                (blue[2][0] == true && blue[2][1] == true && blue[2][2] == true) ||
                // vertical
                (blue[0][0] == true && blue[1][0] == true && blue[2][0] == true) ||
                (blue[0][1] == true && blue[1][1] == true && blue[2][1] == true) ||
                (blue[0][2] == true && blue[1][2] == true && blue[2][2] == true) ||
                // diagonal
                (blue[0][0] == true && blue[1][1] == true && blue[2][2] == true) ||
                (blue[0][2] == true && blue[1][1] == true && blue[2][0] == true) 
            )
            {
                return 2;
            }
            return 404;
        }
    public:
        void runModAmbalanga(int move){
            modAmbalanga(move);
        }
        void runModAsol(int move){
            modAsol(move);
        }
        void runReset(){
            resetMoves();
            resetBoard();
        }
        int CheckWinner(){
            return checkWin();
        }
        void runCheckWin(){
        if (CheckWinner() == 1)
        {
            cout << "\nX Won\n";
            runReset();
        }
        else if (CheckWinner() == 2)
        {
            cout << "\nO won\n";
            runReset();
        }
        }
};

int main(){
    playData gui;
    moves movesLikeJagger;
    int move;       
    cout << "Tic-Tac-Toe\n";
    cout << "Controls: 1-9 only\n\n";
    while ("true")
    {
        gui.printBoard();
        cout << "\nX's Turn: ";
        cin >> move;
        cout << endl;
        movesLikeJagger.runModAmbalanga(move);
        movesLikeJagger.runCheckWin();
        gui.printBoard();
        cout << "\nO's Turn: ";
        cin >> move;
        cout << endl;
        movesLikeJagger.runModAsol(move);
        movesLikeJagger.runCheckWin();
    }
    return 0;
}