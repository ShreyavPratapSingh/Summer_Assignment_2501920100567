#include <iostream>
using namespace std;

int main() {
    float bal = 2000.00;
    int choice;
    float amount;
    
    while (true) {
        cout << "\n--- ATM Interface Menu ---" << endl;
        cout << "1. Balance Inquiry\n2. Deposit\n3. Withdraw\n4. Exit ATM" << endl;
        cout << "Enter action index: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Current Balance: $" << bal << endl;
        } else if (choice == 2) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            bal += amount;
            cout << "Success! Balance updated." << endl;
        } else if (choice == 3) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount <= bal) {
                bal -= amount;
                cout << "Success! Disbursed funds." << endl;
            } else {
                cout << "Insufficient balance funds!" << endl;
            }
        } else if (choice == 4) {
            cout << "Thank you for using our ATM system." << endl;
            break;
        } else {
            cout << "Invalid terminal choice!" << endl;
        }
    }
    return 0;
}