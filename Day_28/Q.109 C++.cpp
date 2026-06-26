#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    bool isAvailable;
};

int main() {
    // allow storage for up to 100 books
    Book library[100];
    int bookCount = 0, choice;
    
    while (true) {
        cout << "\n--- College Library System ---" << endl;
        cout << "1. Add Book Record\n2. Inventory Registry\n3. Exit" << endl;
        cout << "Enter Option: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Book Identifier ID: ";
            cin >> library[bookCount].id;
            cin.ignore();
            cout << "Book Title: ";
            getline(cin, library[bookCount].title);
            library[bookCount].isAvailable = true;
            bookCount++;
        } else if (choice == 2) {
            for (int i = 0; i < bookCount; i++) {
                cout << "ID: " << library[i].id << " | Title: " << library[i].title << " | Available: " << (library[i].isAvailable? "YES" : "NO") << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}