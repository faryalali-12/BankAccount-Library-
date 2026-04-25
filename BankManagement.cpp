// BankManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bank.h"
using namespace std;
int main()
{
	Account acc1(1001, "Alice", 5000);
	Account acc2(1002, "Bob", 3000);
	acc1.display();
	acc2.display();
	cout << "Depositing Ammount" << endl;
	deposit dep1(1003, "Charlie", 0, 2000);
	dep1.depositamm(2000);
	dep1.display();
	cout << "Withdrawing Ammount" << endl;
	withdraw w1(1004, "David", 1000, 500);
	w1.withdrawamm(500);
		w1.display();
		w1.withdrawamm(4599);
		cout << "Creating Account" << endl;
		createAccount c1();
		createAccount c2;
		Account newAcc = c2.createAcc(1005, "Eve", 4000);
		cout << "Account has been created" << endl;
		CurrentAccount ca1(1005,"David",15000,110000);
		ca1.display();
		cout << "Saving Money" << endl;
		SavingsAccount s1(1004, "David", 1000, 35);
	    return 0;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
