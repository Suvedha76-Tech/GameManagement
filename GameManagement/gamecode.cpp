#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char board[3][3];
int playerScore = 0, computerScore = 0;

// Initialize board
void initBoard() {
    char ch = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ch++;
}

// Display board
void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

// Check win
bool checkWin(char mark) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark)
            return true;
        if (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark)
            return true;
    }
    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
        return true;
    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
        return true;

    return false;
}

// Check draw
bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

// Player move
void playerMove() {
    int choice;
    cout << "Enter position (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Invalid move! Try again.\n";
        playerMove();
    } else {
        board[row][col] = 'X';
    }
}

// Computer move (simple AI)
void computerMove() {
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] == 'X' || board[row][col] == 'O');

    board[row][col] = 'O';
    cout << "Computer played.\n";
}

// Main game
void playGame() {
    initBoard();
    char again;

    do {
        initBoard();
        while (true) {
            displayBoard();

            playerMove();
            if (checkWin('X')) {
                displayBoard();
                cout << "You Win!\n";
                playerScore++;
                break;
            }

            if (isDraw()) {
                displayBoard();
                cout << "Draw!\n";
                break;
            }

            computerMove();
            if (checkWin('O')) {
                displayBoard();
                cout << "Computer Wins!\n";
                computerScore++;
                break;
            }

            if (isDraw()) {
                displayBoard();
                cout << "Draw!\n";
                break;
            }
        }

        cout << "\nScore -> You: " << playerScore
             << " | Computer: " << computerScore << endl;

        cout << "Play again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
}

int main() {
    srand(time(0));
    cout << "=== TIC TAC TOE ===\n";
    playGame();
    return 0;
}