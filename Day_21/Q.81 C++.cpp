#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter any string phrase: ";
    getline(cin, str);
    
    int len = 0;
    while (str[len]!= '\0') {
        len++;
    }
    
    cout << "Length of string: " << len << endl;
    return 0;
}