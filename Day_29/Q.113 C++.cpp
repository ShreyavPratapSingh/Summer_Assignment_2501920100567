#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;
    
    while (true) {
        cout << "\n--- Modular Calculator ---" << endl;
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit" << endl;
        cout << "Enter operation choice: ";
        cin >> choice;
        
        if (choice == 5) break;
        
        cout << "Enter two numbers: ";
        cin >> a >> b;
        
        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4: 
                if (b!= 0) cout << "Result: " << a / b << endl; 
                else cout << "Divide by Zero Error!" << endl;
                break;
            default: cout << "Invalid Input" << endl;
        }
    }
    return 0;
}