#include <iostream>
#include "priority_que.cpp"
using namespace std;

int main() {
    priorityQue Airport;
    int choice;
    do {
        cout << "\t\t\t Airport Management\n";
        cout << "1: Arrive\n2: Land\n3: Next\n4: Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                char flight[array_size];
                int pri;
                cout << "Flight number: ";
                cin >> flight;
                cout << "Enter priority: ";
                cin >> pri;
                Airport.enque(flight, pri);
                break;
            }

            case 2: {
                plane* landing = Airport.deque();
                if (landing) { // Check if deque was successful
                    cout << "Following plane landed: \n";
                    cout << "Flight number: " << landing->getFlightNo() << endl;
                    cout << "Flight priority: " << landing->getFlightPriority() << endl;
                } else {
                    cout << "No planes to land.\n";
                }
                break;
            }

            case 3: {
                Airport.next();
                break;
            }

            default:
                if (choice != 4)
                    cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
