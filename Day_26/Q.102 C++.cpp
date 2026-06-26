#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age candidate: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "Candidate is Eligible to Vote." << endl;
    } else {
        cout << "Candidate is Not Eligible (Underage)." << endl;
    }
    return 0;
}