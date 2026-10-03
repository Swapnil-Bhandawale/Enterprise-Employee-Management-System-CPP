#include "../include/Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(int id , string name, string department,double salary,int teamSize) 
:Employee(id , name, department,salary)
{
    this->teamSize = teamSize;
}

void Manager::display()
{
    cout << "Manager Details  " << endl;
    cout << "Employee Id : " << getEmployeeID() <<endl;
    cout << " name : " <<getName() << endl;
    cout << "DepartName : "<< getDepartment() << endl;
    cout << "Salary : " << getSalary() << endl;
    cout << " team Size : "<<teamSize <<endl;

}