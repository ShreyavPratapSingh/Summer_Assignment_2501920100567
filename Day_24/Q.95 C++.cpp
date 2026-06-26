#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter sentence statement: ";
    getline(cin, str);
    
    string word = "", maxWord = "";
    str += " "; // boundary padding
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i]!= ' ') {
            word += str[i];
        } else {
            if (word.length() > maxWord.length()) {
                maxWord = word;
            }
            word = "";
        }
    }
    
    cout << "Longest single word in line: " << maxWord << endl;
    return 0;
}