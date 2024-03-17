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
            cout << "\n       ";
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
            char yesAnd;
        if (CheckWinner() == 1)
        {
            system("cls");
            printBoard();
            cout << "\nX Won\n";    
            system("pause");  
            system("cls");
        }
        else if (CheckWinner() == 2)
        {
            system("cls");
            printBoard();
            cout << "\nO won\n";  
            system("pause");
            system("cls");   
        }
        }
};

int main(){
    playData gui;
    moves movesLikeJagger;
    char yesAnd;  
    int move;
    int movess = 0;     
    cout << "Tic-Tac-Toe\n";
    cout << "Controls: 1-9 only\n";
    gui.printBoard();
    while ("true")
    {
        if (movess < 8)
        {
        cout << "\nX's Turn: ";
        cin >> move;
        movess++;
        system("cls");
            movesLikeJagger.runModAmbalanga(move);
            movesLikeJagger.runCheckWin();
            gui.printBoard();
                if (movesLikeJagger.CheckWinner() == 1 || movesLikeJagger.CheckWinner() == 2) 
                {
                    while ("true")
                    {
                        system("cls");
                        cout << "\nDo you still want to play? Y/N\n";
                        cout << "Selection: ";
                        cin >> yesAnd;
                        if (yesAnd == 'y' || yesAnd == 'Y')
                        {
                            system("cls");
                            movesLikeJagger.runReset();
                            gui.printBoard();
                            break;
                        }
                        else if (yesAnd == 'n' || yesAnd == 'N') {
                            return 0;
                            break;
                        }
                        else {
                            cout << "Invalid Selection\n";
                        } 
                    } 
                }
                    while ("true")
                    {   
                        cout << "\nO's Turn: ";
                        cin >> move;
                        movess++;
                        system("cls");
                            movesLikeJagger.runModAsol(move);   
                            movesLikeJagger.runCheckWin();
                            if (movesLikeJagger.CheckWinner() == 1 || movesLikeJagger.CheckWinner() == 2) 
                                {
                                    gui.printBoard();
                                    while ("true")
                                    {
                                        cout << "\nDo you still want to play? Y/N\n";
                                        cout << "Selection: ";
                                        cin >> yesAnd;
                                        if (yesAnd == 'y' || yesAnd == 'Y')
                                            {
                                                system("cls");
                                                movesLikeJagger.runReset();
                                                gui.printBoard();
                                                break;
                                            }
                                            else if (yesAnd == 'n' || yesAnd == 'N') 
                                            {
                                                return 0;
                                                break;
                                            }
                                                else 
                                                    {
                                                    cout << "Invalid Selection\n";
                                                    } 
                                    } 
                            }  
                        gui.printBoard();
                        break;
                    }  

        }
        else
        {
            cout << "\nDRAW\n";
            system("pause");
            movesLikeJagger.runReset();
            movess = 0;
            system("cls");
            gui.printBoard();
        }
    }
}

/*
    This is my first ever Game to develop so don't mock it :>
    I wrote it without using ai or anything (well, cause' even if I use AI, I still can't fix it lol see below issue). 
    Issues: Duplicate moves trips the game
            If the other player already marked a box it overwrites the existing one
            Due to the 2 booleans for the 2 players it also make it both true
    Solution:   Just don't fucki'n take a move where a player has already marked it LOL
                HAHAHHAHAHHA
                doesnt seem like a solution LOL HAHHAHHAHA
*/