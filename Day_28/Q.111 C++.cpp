#include <iostream>
using namespace std;

int main() {
    int totalSeats = 30, requested;
    int choice;
    
    while (true) {
        cout << "\n--- Ticket Reservation Menu ---" << endl;
        cout << "1. Check Availability\n2. Request Tickets\n3. Cancel System" << endl;
        cout << "Enter option: ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Seats remaining available: " << totalSeats << endl;
        } else if (choice == 2) {
            cout << "Seats requested to reserve: ";
            cin >> requested;
            if (requested <= totalSeats) {
                totalSeats -= requested;
                cout << "Successfully reserved " << requested << " seats!" << endl;
            } else {
                cout << "Sorry, not enough seats available." << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}