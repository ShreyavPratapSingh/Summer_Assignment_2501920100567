#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string phrase to reverse: ";
    getline(cin, str);
    
    int n = 0;
    while (str[n]!= '\0') n++; // manual length calculation
    
    int start = 0, end = n - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    cout << "Manual Reverse String output: " << str << endl;
    return 0;
}