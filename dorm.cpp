#include <bits/stdc++.h>
using namespace std;

// ... (existing code)

int main() {
    hostel management;
    int choice, floorcheck;
    char ch;
    string namecheck;
    management.create();

    ofstream outputFile("room_status.txt"); // Open file for writing

    do {
        cout << "1. Display Current Status of Rooms" << endl;
        cout << "2. Book a Room for 1 person." << endl;
        cout << "3. Book a Room for 2 person." << endl;
        cout << "4. Book a Room for 3 person." << endl;
        cout << "5. Cancel a Room" << endl;
        cout << "6. Search a Name" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                management.display();
                break;
            case 2:
                management.book(1);
                break;
            case 3:
                management.book(2);
                break;
            case 4:
                management.book(3);
                break;
            case 5:
                cout << "Enter Floor no.: ";
                cin >> floorcheck;
                management.cancel(floorcheck);
                break;
            case 6:
                cout << "Enter name: ";
                cin >> namecheck;
                management.search(namecheck);
                break;
            default:
                cout << "Invalid Choice" << endl;
        }

        // Save room status to the file after each operation
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 10; j++) {
                outputFile << name_save[j][i] << " ";
            }
        }
        outputFile << endl;

        cout << "Do You want to Continue (Y/N): ";
        cin >> ch;
        cout << endl;
    } while (ch == 'Y' || ch == 'y');

    outputFile.close(); // Close the file
    return 0;
}

