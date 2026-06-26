#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    
    int freq[256] = {0}; // mapping standard ascii index
    for (int i = 0; i < str.length(); i++) {
        freq[(unsigned char)str[i]]++;
    }
    
    cout << "Character frequency statistics: " << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i!= ' ') {
            cout << "'" << (char)i << "' : " << freq[i] << endl;
        }
    }
    return 0;
}