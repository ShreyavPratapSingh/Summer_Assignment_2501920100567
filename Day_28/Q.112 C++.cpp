#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact book[100];
        int count = 0, choice;
    
    while (true) {
        cout << "\n--- Contacts Manager ---" << endl;
        cout << "1. Add Contact\n2. View List\n3. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        
        if (choice == 1) {
            cin.ignore();
            cout << "Enter name: ";
            getline(cin, book[count].name);
            cout << "Enter phone number: ";
            getline(cin, book[count].phone);
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                cout << "Name: " << book[i].name << " | Phone: " << book[i].phone << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}