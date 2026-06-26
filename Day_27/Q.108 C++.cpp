#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float s1, s2, s3, total, percentage;
    
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter marks of Subject 1, 2, 3: ";
    cin >> s1 >> s2 >> s3;
    
    total = s1 + s2 + s3;
    percentage = (total / 300) * 100;
    
    cout << "\n================ MARKSHEET ================" << endl;
    cout << "Student: " << name << endl;
    cout << "Total Marks: " << total << "/300" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Result Status: " << (percentage >= 40? "PASS" : "FAIL") << endl;
    return 0;
}