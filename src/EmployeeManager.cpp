#include "../include/EmployeeManager.h"

#include <iostream>

using namespace std;

void EmployeeManager ::addEmployee(Employee employee)
{
    employees.push_back(employee);
    departmentCount[employee.getDepartment()]++;
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

bool EmployeeManager ::updateEmployee(int id , string name, string department, double salary)
{
    Employee* employee = searchEmployeeById(id);

    if(employee != nullptr)
    {
        employee->setName(name);
        employee->setDepartment(department);
        employee->setSalary(salary);

        return true;

    }
    return false;

}

void EmployeeManager ::displayDepartmentCount()
{
    cout <<endl;

    cout <<" =============   DEPARTMENT WISE EMPLOYEE COUNT  ==================== "<<endl;

    for(auto department : departmentCount)
    {
        cout <<" Department  : "<<department.first 
        << " |  Employee  : "<< department.second <<endl;
    }
}
