#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getMaxRange(int difficulty) {
    if (difficulty == 1) return 50;
    if (difficulty == 2) return 100;
    if (difficulty == 3) return 500;
    return 100;
}

int getValidGuess(int maxRange) {
    int guess;
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (!cin) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Enter a number.\n";
            continue;
        }

        if (guess < 1 || guess > maxRange) {
            cout << "Enter a number between 1 and " << maxRange << ".\n";
            continue;
        }

        return guess;
    }
}

void playGame() {
    int difficulty;
    cout << "\nSelect Difficulty:\n";
    cout << "1. Easy (1–50)\n";
    cout << "2. Medium (1–100)\n";
    cout << "3. Hard (1–500)\n";
    cout << "Choice: ";

    cin >> difficulty;

    if (!cin || difficulty < 1 || difficulty > 3) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid choice. Defaulting to Medium.\n";
        difficulty = 2;
    }

    int maxRange = getMaxRange(difficulty);
    int secretNumber = rand() % maxRange + 1;
    int attempts = 0;

    cout << "\n I’m thinking of a number between 1 and " << maxRange << ".\n";

    while (true) {
        int guess = getValidGuess(maxRange);
        attempts++;

        if (guess == secretNumber) {
            cout << "\nCorrect.\n";
            cout << "Attempts taken: " << attempts << "\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low.\n";
        } else {
            cout << "Too high.\n";
        }
    }
}

int main() {
    srand(time(0));

    char playAgain;
    do {
        playGame();
        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;
    }

    while (playAgain == 'y' || playAgain == 'Y');
    cout << "Goodbye.\n";
    return 0;
}
