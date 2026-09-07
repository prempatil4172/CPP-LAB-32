#include <iostream>
#include <string>

class Employee {
private:
    int employeeID;
    std::string employeeName;
    double basicSalary;
    double hra; 
    double da;  

public:
    
    Employee(int id, std::string name, double basic, double h, double d) {
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
        std::cout << "\n--- Employee Details ---" << std::endl;
        std::cout << "Employee ID   : " << employeeID << std::endl;
        std::cout << "Employee Name : " << employeeName << std::endl;
        std::cout << "Basic Salary  : $" << basicSalary << std::endl;
        std::cout << "HRA           : $" << hra << std::endl;
        std::cout << "DA            : $" << da << std::endl;
        std::cout << "Gross Salary  : $" << calculateGrossSalary() << std::endl;
    }

    
    ~Employee() {
        std::cout << "\nDestructor called: Object for Employee ID " << employeeID << " is destroyed." << std::endl;
    }
};

int main() {
    
    Employee emp(101, "John Doe", 50000.0, 7500.0, 4000.0);

    
    emp.displayDetails();

    return 0;
}