#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string string: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // convert to lower simple logic
            char lowerCh = (ch >= 'A' && ch <= 'Z')? (ch + 32) : ch;
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    cout << "Vowels count: " << vowels << endl;
    cout << "Consonants count: " << consonants << endl;
    return 0;
}