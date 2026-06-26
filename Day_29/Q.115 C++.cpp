#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "";
    int choice;
    
    while (true) {
        cout << "\n--- String Action Panel ---" << endl;
        cout << "1. Input String\n2. Length Count\n3. Display String\n4. Exit" << endl;
        cout << "Select index: ";
        cin >> choice;
        
        if (choice == 1) {
            cin.ignore();
            cout << "Enter string phrase: ";
            getline(cin, s);
        } else if (choice == 2) {
            cout << "Logical Character Length: " << s.length() << endl;
        } else if (choice == 3) {
            cout << "Stored String: " << s << endl;
        } else {
            break;
        }
    }
    return 0;
}