#include <iostream>
#include <cstdlib>  // For random number generation
#include <ctime>    // For seeding the random number generator
using namespace std;
int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in "
                      << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}