#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);
    
    int words = 0;
    bool inWord = false;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            words++;
        }
    }
    
    cout << "Total word count: " << words << endl;
    return 0;
}