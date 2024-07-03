#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    string response;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "\nDo you want to try and guess it? (yes/no): ";
    cin >> response;

    if (response == "yes" || response == "Yes" || response == "y" || response == "Y") {
        // Loop until the user guesses the correct number
        while (guess != randomNumber) {
            cout << "Enter your guess: ";
            cin >> guess;

            if (guess < randomNumber) {
                cout << "Too low. Try again." << endl;
            } else if (guess > randomNumber) {
                cout << "Too high. Try again." << endl;
            } else {
                cout << "\nCongratulations! You guessed the correct number!" << endl;
            }
        }
    } else {
        cout << "Okay, maybe next time!" << endl;
    }

    return 0;
}
