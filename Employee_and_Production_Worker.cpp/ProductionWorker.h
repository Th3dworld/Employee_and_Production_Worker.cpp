//This is the specification file for the production worker class which is derived from the Employee class
#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
using namespace std;

class ProductionWorker : public  Employee{
	//Declare Protected members
	protected:
		int shift;
		double hourly_pay;

	//Declare public members and attributes
	public:
		//Default constructor
		ProductionWorker():ProductionWorker(0, 0,"", "","") {}

		//Parametized constructor
		ProductionWorker(int shft, double pay, string nam, string num, string date) : Employee(nam, num, date) {
			shift = shft;
			hourly_pay = pay;
		}

		//Mutator functions 
		void set_shift(int shft) {
			if (shft < 1 || shft > 2)
				throw exception("Invalid shft selected");
			shift = shft;
		}

		void set_hourlyPay(int pay) {
			hourly_pay = pay;
		}

		//Accessor functions
		int  get_shift() const {
			return shift;
		}

		double get_hourlyPay() const {
			return hourly_pay;
		}
};

#endif // !PRODUCTIONWORKER_H
