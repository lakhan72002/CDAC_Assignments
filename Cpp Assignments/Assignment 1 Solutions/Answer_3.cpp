#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    // Constructor / reset function
    void reset() {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    // Vehicle paying toll
    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles++;
        totalRevenue += tollAmount;
    }

    // Getter functions
    int getTotalVehicles() {
        return totalVehicles;
    }

    double getTotalRevenue() {
        return totalRevenue;
    }
};

int main() {
    TollBooth booth;
    int choice;

    const double CAR_TOLL = 180;
    const double TRUCK_TOLL = 300;
    const double BUS_TOLL = 350;

    booth.reset();

    do {
        cout << "\n--- Toll Booth Menu ---\n";
        cout << "1. Add a Standard Car\n";
        cout << "2. Add a Truck\n";
        cout << "3. Add a Bus\n";
        cout << "4. Display Total Vehicles\n";
        cout << "5. Display Total Revenue\n";
        cout << "6. Reset Booth Statistics\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            booth.vehiclePayingToll(1, CAR_TOLL);
            cout << "Car passed. Toll collected: Rs." << CAR_TOLL << endl;
            break;

        case 2:
            booth.vehiclePayingToll(2, TRUCK_TOLL);
            cout << "Truck passed. Toll collected: Rs." << TRUCK_TOLL << endl;
            break;

        case 3:
            booth.vehiclePayingToll(3, BUS_TOLL);
            cout << "Bus passed. Toll collected: Rs." << BUS_TOLL << endl;
            break;

        case 4:
            cout << "Total Vehicles Passed: " << booth.getTotalVehicles() << endl;
            break;

        case 5:
            cout << "Total Revenue Collected: Rs." << booth.getTotalRevenue() << endl;
            break;

        case 6:
            booth.reset();
            cout << "Booth statistics reset successfully.\n";
            break;

        case 7:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}