/*
 * Author: Shaqueir Tardif
 * Project Name: Coins
 * Description: Generates the coin breakdown for a user-defined dollar amount
 * This code is open-sourced and able to be used to help in other's code development.
*/ 


#include <iostream>
using namespace std;

int main() {
	
	int dollar{0}, quarter{0}, dime{0}, nickel {0}, penny {0};
	int amount_rem{0}; // amount remaining
	float orig_amount{0.00};
	string resp = "";
	bool repeat{false};
	
	
	cout << "Welcome to Shaq's Coin Breakdown Generator!!\n\n";
	
	do{
	cout << "Enter a U.S. dollar amount (in form $.$$) :$";
	cin >> orig_amount;
	
	amount_rem = orig_amount * 100; //convert $.$$ format to cents format
	
	/*
	 * dollar = 100 cents
	 * quarter = 25 cents
	 * dime = 10 cents
	 * nickel = 5 cents
	 * penny = 1 cent
	*/
 	
	dollar = amount_rem / 100; //find if theres a dollar amount in the amount given
	amount_rem %= 100; //only use the remaining amount in further calculations
	quarter = amount_rem / 25; //etc.
	amount_rem %= 25;
	dime = amount_rem / 10;
	amount_rem %= 10;
	nickel = amount_rem / 5;
	amount_rem %= 5;
	penny = amount_rem / 1;
	
	cout << "\n\n$" << orig_amount << " is equivalent to "<< orig_amount*100 << " cents and breaks down into: " << endl;
	cout << "Dollars: " << dollar << endl;
	cout << "Quarters: " << quarter << endl;
	cout << "Dimes: " << dime << endl;
	cout << "Nickels: " << nickel << endl;
	cout << "Pennies: " << penny << endl;
	
	cout << "\n\nWould you like to breakdown another dollar amount? [Enter Yes/No]: ";
	cin >> resp;
	repeat = (resp == "Yes" || resp == "YES" || resp == "Y" || resp == "y");
	}while (repeat);
	return 0;
}
