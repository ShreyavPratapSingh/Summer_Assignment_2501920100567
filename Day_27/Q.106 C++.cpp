#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string dept;
};

int main() {
    Employee records[100];
    int empCount = 0, choice;
    
    while (true) {
        cout << "\n--- Employee System ---" << endl;
        cout << "1. Register Employee\n2. List Employees\n3. Exit" << endl;
        cout << "Select option: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter employee ID: ";
            cin >> records[empCount].id;
            cin.ignore();
            cout << "Enter name: ";
            getline(cin, records[empCount].name);
            cout << "Enter department: ";
            getline(cin, records[empCount].dept);
            empCount++;
        } else if (choice == 2) {
            for (int i = 0; i < empCount; i++) {
                cout << "ID: " << records[i].id << " | Name: " << records[i].name << " | Dept: " << records[i].dept << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}