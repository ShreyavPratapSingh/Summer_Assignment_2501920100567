#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student database[100];
    int count = 0, choice;
    
    while (true) {
        cout << "\n--- Student Records Manager ---" << endl;
        cout << "1. Add Student\n2. View All\n3. Exit" << endl;
        cout << "Select choice: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter roll number: ";
            cin >> database[count].rollNo;
            cin.ignore();
            cout << "Enter student name: ";
            getline(cin, database[count].name);
            cout << "Enter marks achieved: ";
            cin >> database[count].marks;
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                cout << "Roll: " << database[i].rollNo << " | Name: " << database[i].name << " | Marks: " << database[i].marks << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}