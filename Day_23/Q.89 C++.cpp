#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a word block: ";
    cin >> str;
    
    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++) {
        freq[(unsigned char)str[i]]++;
    }
    
    char match = '\0';
    for (int i = 0; i < str.length(); i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            match = str[i];
            break;
        }
    }
    
    if (match!= '\0') {
        cout << "First non-repeating character is: " << match << endl;
    } else {
        cout << "No non-repeating characters found." << endl;
    }
    return 0;
}