#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H


#include "Employee.h"
#include <vector>

using namespace std;

class EmployeeManager
{
    private :

    vector <Employee>employees;

    public :
    void addEmployee (Employee employee);
    void displayAllEmployee();
    
    Employee* searchEmployeeById(int id);

    bool updateEmployee(int id , string name , string department, double salary );
    bool deleteEmployee(int id);

};
#endif