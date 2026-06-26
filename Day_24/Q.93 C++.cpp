#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter basic string s1: ";
    cin >> s1;
    cout << "Enter comparison string s2: ";
    cin >> s2;
    
    if (s1.length()!= s2.length()) {
        cout << "Not a rotation of each other." << endl;
        return 0;
    }
    
    string concatenated = s1 + s1;
    if (concatenated.find(s2)!= string::npos) {
        cout << s2 << " is a rotation of " << s1 << endl;
    } else {
        cout << s2 << " is NOT a rotation of " << s1 << endl;
    }
    return 0;
}