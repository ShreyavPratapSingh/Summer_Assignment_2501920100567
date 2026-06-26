#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter target string: ";
    cin >> str;
    
    int freq[256] = {0};
    char match = '\0';
    
    for (int i = 0; i < str.length(); i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > 1) {
            match = str[i];
            break;
        }
    }
    
    if (match!= '\0') {
        cout << "First repeating character is: " << match << endl;
    } else {
        cout << "No repeating characters detected." << endl;
    }
    return 0;
}