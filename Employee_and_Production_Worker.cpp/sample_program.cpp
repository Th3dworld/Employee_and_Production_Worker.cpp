//This is a sample program that shows the Prodution worker class(A class inherited from the employee worker class at work)
#include<iostream>
#include "ProductionWorker.h"
using namespace std;

int main() {
	//Create prod worker objects
	
	//Using default constructor
	ProductionWorker one;
	//Using parametized contrustor
	ProductionWorker two(2, 32.2, "Micheal Sakala", "ZP0912xa", "12/03/2003");

	//Set values for proudction worker one
	one.set_empName("Zunda Phiri");
	one.set_empNumber("Z7826123");
	one.set_hireDate("11/05/2019");

	//Test exception handling
	try {
		one.set_shift(5);
	}
	catch (exception) {
		cout << "Invalid shift entered" << endl;
	}
	one.set_shift(1);
	one.set_hourlyPay(23.2);

	//Display data from both starting with...
	//2
	cout << two.get_hireDate() << endl;
	cout << two.get_empNumber() << endl;
	cout << two.get_hireDate() << endl;
	cout << two.get_hourlyPay() << endl;
	cout << two.get_shift() << endl << endl;
	//1
	cout << one.get_hireDate() << endl;
	cout << one.get_empNumber() << endl;
	cout << one.get_hireDate() << endl;
	cout << one.get_hourlyPay() << endl;
	cout << one.get_shift() << endl;

	return 0;
}