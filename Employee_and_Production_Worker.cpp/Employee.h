//This is the specification file for the employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;

class Employee {
	//Declare protected members of Class
	protected:
		string employee_name;
		string employee_number;
		string hire_date;

	//Declare private members of class
	public:
		//Default constructor that deligates parametized constructor
		Employee() :Employee("", "", ""){}

		//Parametized constructor that takes all three protected attributes as arguments
		Employee(string nme, string num, string dte) {
			employee_name = nme;
			employee_number = num;
			hire_date = dte;
		}

		//Mutator functions
		void set_empName(string nme) {
			employee_name = nme;
		}

		void set_empNumber(string num) {
			employee_number = num;
		}

		void set_hireDate(string dte) {
			hire_date = dte;
		}

		//Accesor functions
		string get_empName() const {
			return employee_name;
		}

		string get_empNumber() const {
			return employee_number;
		}

		string get_hireDate() const {
			return hire_date;
		}
};

#endif EMPLOYEE_H