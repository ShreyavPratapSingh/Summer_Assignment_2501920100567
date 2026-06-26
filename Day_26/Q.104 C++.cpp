#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;
    cout << "--- Quiz Challenge ---" << endl;
    
    cout << "Q1: What is the base index of an array in C++?\n1) 1\n2) 0\nAnswer: ";
    cin >> answer;
    if (answer == 2) score++;
    
    cout << "Q2: Which operator is used to calculate remainder?\n1) /\n2) %\nAnswer: ";
    cin >> answer;
    if (answer == 2) score++;
    
    cout << "Quiz Finished! Final Score: " << score << "/2" << endl;
    return 0;
}