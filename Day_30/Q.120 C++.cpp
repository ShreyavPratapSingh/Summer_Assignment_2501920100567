#include <iostream>
#include <string>
using namespace std;

// global tracking storage
string inventoryDb;
int itemTotalCount = 0;

void addNewStock() {
    cin.ignore();
    cout << "Enter name of inventory stock: ";
    getline(cin, inventoryDb);
    itemTotalCount++;
    cout << "Added successfully!" << endl;
}

void printInventoryLedger() {
    cout << "--- Logged Warehouse Stock ---" << endl;
    for (int i = 0; i < itemTotalCount; i++) {
        cout << i + 1 << ". " << inventoryDb[i] << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n=== Terminal Warehouse System (Project Q120) ===" << endl;
        cout << "1. Add Stock Entry\n2. View Stock ledger\n3. Shutdown System" << endl;
        cout << "Select Operation: ";
        cin >> choice;
        
        if (choice == 1) {
            addNewStock();
        } else if (choice == 2) {
            printInventoryLedger();
        } else if (choice == 3) {
            cout << "Shutdown instructions complete. Terminal offline." << endl;
            break;
        } else {
            cout << "Option is invalid." << endl;
        }
    }
    return 0;
}