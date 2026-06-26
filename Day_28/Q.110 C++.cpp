#include <iostream>
#include <string>
using namespace std;

struct BankAcc {
    long long accNo;
    string holderName;
    float balance;
};

int main() {
    BankAcc account;
    cout << "Enter account number: ";
    cin >> account.accNo;
    cin.ignore();
    cout << "Enter holder name: ";
    getline(cin, account.holderName);
    account.balance = 500.00; // minimum layout
    
    cout << "\nAccount Registry Successful." << endl;
    cout << "Acc: " << account.accNo << " | Holder: " << account.holderName << " | Bal: $" << account.balance << endl;
    return 0;
}