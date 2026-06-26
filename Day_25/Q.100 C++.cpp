#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[100]; // Assuming a maximum of 100 words
    int n;
    cout << "Enter total words count: ";
    cin >> n;
    
    cout << "Enter words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    
    cout << "Sorted Words by Length: ";
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }
    cout << endl;
    return 0;
}