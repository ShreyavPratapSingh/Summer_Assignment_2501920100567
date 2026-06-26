#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    
    int f1[256] = {0}, f2[256] = {0};
    for (int i = 0; i < s1.length(); i++) f1[(unsigned char)s1[i]]++;
    for (int i = 0; i < s2.length(); i++) f2[(unsigned char)s2[i]]++;
    
    cout << "Common intersecting characters: ";
    for (int i = 0; i < 256; i++) {
        if (f1[i] > 0 && f2[i] > 0) {
            cout << (char)i << " ";
        }
    }
    cout << endl;
    return 0;
}