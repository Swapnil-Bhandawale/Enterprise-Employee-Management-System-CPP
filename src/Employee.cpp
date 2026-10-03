#include "../include/Employee.h"
#include <iostream>
using namespace std;

Employee :: Employee()
{
    employeeId = 0;
    name ="";
    department = "";
    salary=0.0;
}

Employee :: Employee(int id,string name, string department, double salary)
{
    employeeId = id;
    this->name=name;
    this->department = department;
    this->salary= salary;
}

int Employee :: getEmployeeID()
{
    return employeeId;
}
string Employee :: getName()
{
    return name;
}
string Employee :: getDepartment()
{
    return department;
}

double Employee :: getSalary()
{
    return salary;
} 



//-----------------------------

void Employee :: setName(string name)
{
    this->name = name;
}

void Employee :: setDepartment(string department)
{
    this->department = department;
}

void Employee :: setSalary(double salary)
{
    this->salary = salary;
}


void Employee :: display()
{
    cout<< "Employee ID : "<< employeeId << endl;
    cout<< " Employee Name : "<< name << endl;
    cout<< " Employee Department : "<< department << endl;
    cout<< " Employee Salary : "<< salary << endl;
}