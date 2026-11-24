#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

// This was not made by AI. Almera made this!
using namespace std;

// Function prototypes
void printBanner();
int calcSlicesNeeded(int guests, int slicesPerGuest);
int calcPizzasNeeded(int slicesNeeded);
double calcSubtotal(int pizzas, double pricePerPizza);
double calcGst(double subtotal);
double calcCostPerGuest(double total, int guests);
void printMoneyLine(string label, double amount);

int main() {
    // Input variables
    string name;
    int guests;
    int slicesPerGuest;
    double pricePerPizza;

    //  Gather user input
    cout << "Party name: ";
    getline(cin, name);

    cout << "Number of guests: ";
    cin >> guests;

    cout << "Slices per guest: ";
    cin >> slicesPerGuest;

    cout << "Price per pizza: $";
    cin >> pricePerPizza;

    // Call functions for calculations
    int slicesNeeded = calcSlicesNeeded(guests, slicesPerGuest);
    int pizzas = calcPizzasNeeded(slicesNeeded);
    double subtotal = calcSubtotal(pizzas, pricePerPizza);
    double gst = calcGst(subtotal);
    double total = subtotal + gst;
    double perGuest = calcCostPerGuest(total, guests);

    // Print the formatted receipt
    printBanner();
    cout << left << setw(18) << "Party:" << name << endl;
    cout << left << setw(18) << "Guests:" << guests << endl;
    cout << left << setw(18) << "Slices needed:" << slicesNeeded << endl;
    cout << left << setw(18) << "Pizzas to order:" << pizzas << endl;
    cout << "----------------------------" << endl;
    printMoneyLine("Subtotal:", subtotal);
    printMoneyLine("GST (5%):", gst);
    printMoneyLine("Total:", total);
    printMoneyLine("Per guest:", perGuest);
    cout << "============================" << endl;

    return 0;
}

// Purpose: Prints the three-line banner at the top of the receipt.
// Inputs: None
// Returns: None

void printBanner() {
    cout << "============================" << endl;
    cout << "     PIZZA PARTY PLANNER" << endl;
    cout << "============================" << endl;
}


int calcSlicesNeeded(int guests, int slicesPerGuest) {
    return guests * slicesPerGuest;
}

// Purpose: Calculates the whole pizzas needed, rounding up for partial pizzas.
// Inputs: slicesNeeded (int)
// Returns: Whole pizzas to order (int)

int calcPizzasNeeded(int slicesNeeded) {
    const double SLICES_PER_PIZZA = 8.0;
    return ceil(slicesNeeded / SLICES_PER_PIZZA);
}

// Purpose: Calculates the cost of the pizzas before tax.
// Inputs: pizzas (int), pricePerPizza (double)
// Returns: Subtotal before tax (double)

double calcSubtotal(int pizzas, double pricePerPizza) {
    return pizzas * pricePerPizza;
}

// Purpose: Calculates the 5% GST on a given subtotal.
// Inputs: subtotal (double)
// Returns: GST amount (double)

double calcGst(double subtotal) {
    const double GST_RATE = 0.05;
    return subtotal * GST_RATE;
}

// Purpose: Calculates each guest's equal share of the final total.
// Inputs: total (double), guests (int)
// Returns: Cost per guest (double)

double calcCostPerGuest(double total, int guests) {
    return total / guests;
}

// Purpose: Prints a formatted receipt line with a label and dollar amount to two decimal places.
// Inputs: label (string), amount (double)
// Returns: None

void printMoneyLine(string label, double amount) {
    cout << fixed << setprecision(2);
    cout << left << setw(18) << label << "$" << amount << endl;
}