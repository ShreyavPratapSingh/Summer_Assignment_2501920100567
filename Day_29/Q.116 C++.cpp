#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Item {
    int sku;
    string name;
    int qty;
};

int main() {
    vector<Item> storage;
    int count = 0, choice;
    
    while (true) {
        cout << "\n--- Warehouse Inventory ---" << endl;
        cout << "1. Log New Item\n2. Stock Ledger List\n3. Exit" << endl;
        cout << "Select Choice: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "SKU code: ";
            cin >> storage[count].sku;
            cin.ignore();
            cout << "Item Name: ";
            getline(cin, storage[count].name);
            cout << "In-stock Quantity: ";
            cin >> storage[count].qty;
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                cout << "SKU: " << storage[i].sku << " | Name: " << storage[i].name << " | Stock Qty: " << storage[i].qty << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}