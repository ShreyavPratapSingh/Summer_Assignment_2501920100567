#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string (e.g. aaabbc): ";
    cin >> str;
    
    string compressed = "";
    int n = str.length();
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        compressed += str[i] + to_string(count);
    }
    
    cout << "Compressed output: " << compressed << endl;
    return 0;
}