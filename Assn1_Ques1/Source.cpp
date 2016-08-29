// Philip Fernandez
// Assignment01 Question 01

/*
This program calculates and displays the tax, 
sub-total and tip of a given restaurant bill.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	// Named constants for tip and tax rates.
	const double TIP_PERCENTAGE = 0.20;
	const double TAX_PERCENTAGE = 0.105;
	double restaurantBill = 38.40,
		tax = restaurantBill * TAX_PERCENTAGE,
		subTotal = restaurantBill + tax,
		tip = subTotal * TIP_PERCENTAGE,
		total = subTotal + tip;

	// Sets all decimal numbers to be rounded to two decimal places.
	cout << setprecision(2) << fixed;
	// The use of setw aligns the decimals for the output of tax and tip.
	cout << "Bill           $ " << restaurantBill << "\n";
	cout << "Tax at 10.5%   $ " << setw(5) << tax << "\n";
	cout << "Sub-total      $ " << subTotal << "\n";
	cout << "Tip at 20%     $ " << setw(5) << tip << "\n";
	cout << "-----------------------" << "\n";
	cout << "Total Bill     $ " << total << "\n\n";
	return 0;
}