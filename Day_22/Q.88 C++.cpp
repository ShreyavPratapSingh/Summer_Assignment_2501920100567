#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, resultStr = "";
    cout << "Enter text block with spaces: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i]!= ' ') {
            resultStr += str[i];
        }
    }
    
    cout << "Processed string is: " << resultStr << endl;
    return 0;
}