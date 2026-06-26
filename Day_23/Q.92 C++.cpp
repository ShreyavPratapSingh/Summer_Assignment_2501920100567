#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter text to evaluate: ";
    getline(cin, str);
    
    int freq[256] = {0};
    int maxCount = 0;
    char maxChar = ' ';
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i]!= ' ') {
            freq[(unsigned char)str[i]]++;
            if (freq[(unsigned char)str[i]] > maxCount) {
                maxCount = freq[(unsigned char)str[i]];
                maxChar = str[i];
            }
        }
    }
    
    cout << "Max occurring char: '" << maxChar << "' (Count: " << maxCount << ")" << endl;
    return 0;
}