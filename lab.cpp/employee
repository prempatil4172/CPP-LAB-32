#include <iostream>
using namespace std;
class Employee{
private:
    int employeeID;
    string employeeName;
    string department;
    float basicSalary;
public:
    void acceptDetails(){
        cout<<"Enter Employee ID: ";
        cin>>employeeID;
        cout<<"Enter Employee Name: ";
        cin>>employeeName;
        cout<<"Enter Department: ";
        cin>>department;
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
    }
    void displayDetails(){
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: "<<department << endl;
        cout << "Basic Salary: "<<basicSalary << endl;
    }
    void calculateAnnualSalary(){
        float annualSalary = basicSalary * 12;
        cout<<"Annual Salary: "<<annualSalary<<endl;
    }
};
int main(){
    Employee e;
    e.acceptDetails();
    e.displayDetails();
    e.calculateAnnualSalary();
    return 0;
}