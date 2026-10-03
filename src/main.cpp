#include"../include/Employee.h"
#include "../include/Manager.h"
#include "../include/EmployeeManager.h"
#include <typeinfo>
#include <iostream>
using namespace std;    

int main()
{
    EmployeeManager manager;

    Employee emp1(101,"Swapnil","IT",250000.00);
    Employee emp2(102,"Amit","HR",980000.00);
    Employee emp3(103,"Sneha","Finance",450000.00); 




    // Manager manager1(201,"rahul","IT",80000.00,8);

    // Employee* employeePtr;

    // employeePtr = &manager1;
    // employeePtr->display();

    // cout <<endl;

    // cout<< " object Type : "<<typeid(*employeePtr).name()<<endl;


    // Manager* managerPtr = dynamic_cast<Manager*>(employeePtr);

    // if(managerPtr != nullptr)
    // {
    //     cout<<" RTTI check : object is a Manager. "<<endl;

    // }
    // else{
    //     cout<<"RTTI Check : object is not a Manager . " <<endl;
    // } 


    manager.addEmployee(emp1);
    manager.addEmployee(emp2);
    manager.addEmployee(emp3); 


    cout << "===============  ALL EMPLOYEE  ==================" <<endl;

    manager.displayAllEmployee();



    cout<< endl;

    cout << "========== Seach Employee  ===============" <<endl;
    Employee* foundEmployee = manager.searchEmployeeById(102);

    if(foundEmployee != nullptr)
    {
        foundEmployee->display();

    }
    else{
        cout <<" Employee not fond .." <<endl;
    }



    cout<< endl;

cout << " ==========  DELETE EMPLOYEE ==========="<<endl;
bool deleted = manager.deleteEmployee(103);
if(deleted)
{
    cout <<" Employee deleted sucessfully ...." <<endl;
}
else{
    cout <<" Employee not found.." <<endl;
}
cout <<endl ;

cout <<" ==============Employee After delete =====================" <<endl;
manager.displayAllEmployee();

    return 0;

    

}