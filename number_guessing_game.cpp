#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    int secretNumber, guess, attempts = 0;

    // Generate random number between 1 and 100
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "Enter your guess: "<< endl;
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number." << endl;
            cout << "Total attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    cout << "Game Over!" << endl;

    return 0;
}