#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to roll a six-sided die
int rollDie() {
    return rand() % 6 + 1;
}

// Global variables for player positions
int player1 = 0, player2 = 0;

// Function to print the board
void printBoard() {
    int board[101];
    for (int i = 1; i <= 100; i++) {
        board[i] = i;
    }

    int alt = 0;
    int iterLR = 101;
    int iterRL = 80;
    int val = 100;

    while (val--) {
        if (alt == 0) {
            iterLR--;
            if (iterLR == player1) {
                cout << "#P1 ";
            } else if (iterLR == player2) {
                cout << "#P2 ";
            } else {
                cout << board[iterLR] << " ";
            }

            if (iterLR % 10 == 1) {
                cout << "\n\n";
                alt = 1;
                iterLR -= 10;
            }
        } else {
            iterRL++;
            if (iterRL == player1) {
                cout << "#P1 ";
            } else if (iterRL == player2) {
                cout << "#P2 ";
            } else {
                cout << board[iterRL] << " ";
            }

            if (iterRL % 10 == 0) {
                cout << "\n\n";
                alt = 0;
                iterRL -= 30;
            }
        }
        if (iterRL == 10)
            break;
    }
    cout << "\n";
}

// Function to move the player
int movePlayer(int currentPlayer, int roll) {
    int newPosition = currentPlayer + roll;
    int snakesAndLadders[101] = {0};

    // Ladders (positive values) and Snakes (negative values)
    snakesAndLadders[6] = 40;
    snakesAndLadders[23] = -10;
    snakesAndLadders[45] = -7;
    snakesAndLadders[61] = -18;
    snakesAndLadders[65] = -8;
    snakesAndLadders[77] = 5;
    snakesAndLadders[98] = -10;

    int newSquare = newPosition + snakesAndLadders[newPosition];
    return (newSquare > 100) ? currentPlayer : newSquare;
}

int main() {
    srand(time(0));
    int currentPlayer = 1;
    bool won = false;

    cout << "Snake and Ladder Game\n";

    while (!won) {
        cout << "\nPlayer " << currentPlayer << ", press Enter to roll the die...";
        cin.ignore(); // Wait for user input
        int roll = rollDie();
        cout << "You rolled a " << roll << ".\n";

        if (currentPlayer == 1) {
            player1 = movePlayer(player1, roll);
            cout << "Player 1 is now at square " << player1 << ".\n\n";
            printBoard();
            if (player1 == 100) {
                cout << "Player 1 wins!\n";
                won = true;
            }
        } else {
            player2 = movePlayer(player2, roll);
            cout << "Player 2 is now at square " << player2 << ".\n\n";
            printBoard();
            if (player2 == 100) {
                cout << "Player 2 wins!\n";
                won = true;
            }
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}