#include <iostream>
using namespace std;

int main() {
    int secretNum = 35; // setting hardcoded target
    int guess;
    cout << "--- Guessing Game ---" << endl;
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < secretNum) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNum) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! Correct guess." << endl;
            break;
        }
    }
    return 0;
}