#include <iostream>
#include <string>
using namespace std;

int main() {
    string books[] = {"C++ Programming", "Data Structures", "Java Basics", "Web Tech", "Discrete Maths"};
    int choice;
    
    while (true) {
        cout << "\n--- Mini Library Books Ledger ---" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << books[i] << endl;
        }
        cout << "6. Exit Library" << endl;
        cout << "Enter choice index to borrow book: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 5) {
            cout << "Successfully borrowed: " << books[choice - 1] << endl;
        } else {
            break;
        }
    }
    return 0;
}