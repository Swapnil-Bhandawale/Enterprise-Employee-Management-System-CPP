#include "../include/Employee.h"
using namespace std;


class Manager : public Employee
{
    private :

    int teamSize;

    public : 

    Manager (int id , string name,string department,double salary,int teamSize);

    void display ()override;
};