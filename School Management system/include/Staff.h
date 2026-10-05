#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <Person.h>
using namespace std;
class Staff:public Person
{
private:
    int staffID;
    string role;
    float salary;
public:
    Staff()
    {

    }
    Staff(int staffID,string role,float salary)
    {
        this->staffID=staffID;
        this->role=role;
        this->salary=salary;
    }
    void setStaffID(int staffID)
    {
        this->staffID=staffID;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    int getStaffID()
    {
        return staffID;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please Enter Staff ID :"<<endl;
        cin>>staffID;
        cout<<"Please Enter Role :"<<endl;
        cin>>role;
        cout<<"Please Enter Salary :"<<endl;
        cin>>salary;
    }
    void print()
    {
        Person::print();
        cout<<"The Staff ID Is :"<<staffID<<endl;
        cout<<"The Role Is :"<<role<<endl;
        cout<<"The Salary Is :"<<salary<<endl;
    }
};

#endif // STAFF_H
