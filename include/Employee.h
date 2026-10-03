#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
    private :

    int employeeId;
    string name;
    string department;
    double salary;

    public :

    Employee();
    Employee(int employeeId,string name, string department,double salary);


    // getter

    int getEmployeeID();
    string getName();
    string getDepartment();
    double getSalary();


    // setter

    void setName(string name);
    void setDepartment(string department);
    void setSalary (double salary);

    virtual void display();
};

#endif

