#include <iostream>
using namespace std;
#include <string>

class Employee {
private:
    int employeeID;
    string employeeName;
    double basicSalary;
    double hra; 
    double da;  

public:
    
    Employee(int id, string name, double basic, double h, double d) {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        hra = h;
        da = d;
    }

   
    double calculateGrossSalary() {
        return basicSalary + hra + da;
    }

    
    void displayDetails() {
        cout << "\n Employee Details " << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Basic Salary  : $" << basicSalary << endl;
        cout << "HRA           : $" << hra << endl;
        cout << "DA            : $" << da << endl;
        cout << "Gross Salary  : $" << calculateGrossSalary() << endl;
    }

    
    ~Employee() {
        cout << "\nDestructor called: Object for Employee ID " << employeeID << " is destroyed." << endl;
    }
};

int main() {
    
    Employee emp(1, "prem patil", 5000.0, 750.0, 40.0);

    
    emp.displayDetails();

    return 0;
}