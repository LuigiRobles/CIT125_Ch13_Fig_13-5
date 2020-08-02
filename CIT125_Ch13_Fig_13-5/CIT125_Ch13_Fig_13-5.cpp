// CIT125 Intro to C++ Luigi Robles
// 08-01-2020 Summer Term
// Ch.13 pg.465-466 Fig.13-5 Primrose Auction House
// Displays a buyer's name and premium

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	const double RATE = 0.1; //named constant for Rate
	string name = "";
	int price = 0;
	double premium = 0.0;

	cout << "Buyer's name: ";
	getline(cin, name); //function call to get input from keyboard
	cout << "Purchase price: ";
	cin >> price; //input for price

	premium = price * RATE; //calculate premium

	cout << fixed << setprecision(2);
	cout << "********Auction Summary******" << endl;
	cout << "Buyer: " << name << endl //output for name
		<< "Premium: $" << premium << endl; //output calculated premium
	
	return 0;
} //end of main