#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter text to check: ";
    getline(cin, str);
    
    int start = 0;
    int end = str.length() - 1;
    bool isPal = true;
    
    while (start < end) {
        if (str[start]!= str[end]) {
            isPal = false;
            break;
        }
        start++;
        end--;
    }
    
    if (isPal) {
        cout << "The string is a Palindrome." << endl;
    } else {
        cout << "The string is not a Palindrome." << endl;
    }
    return 0;
}