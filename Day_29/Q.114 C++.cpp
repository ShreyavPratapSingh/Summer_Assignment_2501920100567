#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice;

    while (true) {
        cout << "\n--- Array Menu operations ---" << endl;
        cout << "1. Populate Elements\n2. Output Displays\n3. Sum Aggregate\n4. Exit" << endl;
        cout << "Choose action: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter size: ";
            cin >> n;
            cout << "Enter " << n << " numbers: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
        } else if (choice == 2) {
            cout << "Active entries: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        } else if (choice == 3) {
            int total = 0;
            for (int i = 0; i < n; i++) total += arr[i];
            cout << "Sum: " << total << endl;
        } else {
            break;
        }
    }
    return 0;
}