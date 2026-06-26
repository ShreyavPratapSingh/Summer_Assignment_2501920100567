#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string with repetitions: ";
    cin >> str;
    
    string resultStr = "";
    int freq[256] = {0};
    
    for (int i = 0; i < str.length(); i++) {
        if (freq[(unsigned char)str[i]] == 0) {
            resultStr += str[i];
            freq[(unsigned char)str[i]] = 1;
        }
    }
    
    cout << "De-duplicated String is: " << resultStr << endl;
    return 0;
}