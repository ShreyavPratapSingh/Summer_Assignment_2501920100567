#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
    
    if (s1.length()!= s2.length()) {
        cout << "Not Anagram (Lengths mismatched)" << endl;
        return 0;
    }
    
    int count[256] = {0};
    for (int i = 0; i < s1.length(); i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    
    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (count[i]!= 0) {
            isAnagram = false;
            break;
        }
    }
    
    if (isAnagram) {
        cout << "The strings are Anagrams." << endl;
    } else {
        cout << "The strings are Not Anagrams." << endl;
    }
    return 0;
}