#include <iostream>
#include <string>
using namespace std;

int main() {
    string emps[100]; // Assuming a maximum of 100 employees
    int n = 0, choice;
    
    while (true) {
        cout << "\n--- Mini HR System ---" << endl;
        cout << "1. Add Employee Name\n2. List All Records\n3. Exit" << endl;
        cout << "Enter action: ";
        cin >> choice;
        
        if (choice == 1) {
            cin.ignore();
            cout << "Enter Employee Full Name: ";
            getline(cin, emps[n]);
            n++;
        } else if (choice == 2) {
            cout << "Employee database registry:" << endl;
            for (int i = 0; i < n; i++) {
                cout << i + 1 << ". " << emps[i] << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}