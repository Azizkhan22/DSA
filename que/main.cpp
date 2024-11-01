#include <iostream>
#include "hospital.h"
using namespace std;
int main(){
    emergencyWard A;
    int choice;

    while (true) {
        cout << "\n=== Clinic Queue Management ===" << endl;
        cout << "1. Register Patient" << endl;
        cout << "2. Serve Patient" << endl;
        cout << "3. Cancel All Patients" << endl;
        cout << "4. Can Doctor Go Home?" << endl;
        cout << "5. Show All Patients" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int priority;
                cout << "Enter priority of patient: ";
                cin >> priority;
                A.RegisterPatient(priority);
                break;
            case 2:
                A.servePatient();
                break;
            case 3:
                A.CancelAll();
                break;
            case 4:
                A.CanDoctorGoHome();
                break;
            case 5:
                A.ShowAllpatients();
                break;
            case 6:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
                break;
        }
    }
    return 0;
}