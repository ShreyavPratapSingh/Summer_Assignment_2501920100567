#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[100];
    float marks[100];
    int studentCount;
    
    cout << "Enter number of student records to input: ";
    cin >> studentCount;
    
    for (int i = 0; i < studentCount; i++) {
        cin.ignore();
        cout << "Student " << i + 1 << " Name: ";
        getline(cin, names[i]);
        cout << "Student " << i + 1 << " Marks: ";
        cin >> marks[i];
    }
    
    cout << "\nGenerated Record Sheet: " << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << "Name: " << names[i] << " | Score: " << marks[i] << endl;
    }
    return 0;
}