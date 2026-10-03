#include "../include/EmployeeManager.h"

#include <iostream>

using namespace std;

void EmployeeManager :: addEmployee(Employee employee)
{
    employees.push_back(employee);
}

void EmployeeManager :: displayAllEmployee()
{

    for(Employee employee:employees)
    {
        employee.display();
        cout<<" <---------------------------------------->" <<endl;
    }
}

Employee* EmployeeManager :: searchEmployeeById(int id)
{
    for(Employee& employee : employees)
    {
        if(employee.getEmployeeID()== id)
        {
            return &employee;
        }
    }
    return nullptr;
}

bool EmployeeManager :: deleteEmployee(int id)
{
    for (auto it = employees.begin(); it != employees.end();++it)
    {

        if(it->getEmployeeID()==id)
        {
            employees.erase(it);
            return true;
        }

    }
    return false;
}
