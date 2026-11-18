#include <iostream>
#include <iomanip> // fixed, setprecision
#include <cmath> // ceil(), round()
using namespace std;

const double NUM_SLICES = 8.0; // per pizza
const double GST_TAX = 0.05; // tax

// This was not made by AI. Almera made this!

void printOrderBanner() {
    cout << "========================================" << endl;
    cout << "          PIZZA PARTY PLANNER           " << endl;
    cout << "========================================" << endl;
}

void displayOrderSummary(string name, string drink, char size, int shots, double total) {
    cout << "Party Name: " << name << endl;
    cout << "Number of Guests: " << drink << endl;
    cout << "Slices per Guest: " << size << endl;
    cout << "Price per pizza: $" << shots << endl;
    cout << "The total cost is $" << total << endl;
    cout << "Have an awesome day!" << endl;
}
int main () {
    // Ask for: party name (getline)
    // number of guests (int)
    // slices per guest (int)
    // and the price per pizza (float)
    string partyName;
    int numGuests;
    int slices;
    float pricePerPizza;

    cout << "Party Name: ";
    getline(cin, partyName);

    cout << "Number of Guests: ";
    cin >> numGuests;

    cout << "Slices per Guest: ";
    cin >> slices;
    cout << "Price per Pizza: $";
    cin >> pricePerPizza;

    // output everything in a receipt style format

    printOrderBanner();

    cout << "Party Name:             " << partyName << endl;
    cout << "Number of Guests:        " << numGuests << endl;
    cout << "Slices needed:        " << slices << endl;
    cout << "Pizzas to order:         $" << pricePerPizza << endl;
    cout << "----------------------------------------" << endl;

    return 0;