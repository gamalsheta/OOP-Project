#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <Person.h>
using namespace std;
class Teacher:public Person
{
private:
    int teacherID;
    string subjectSpecialization;
    float salary;
public:
    Teacher()
    {

    }
    Teacher(int teacherID,string subjectSpecialization,float salary)
    {
        this->teacherID=teacherID;
        this->subjectSpecialization=subjectSpecialization;
        this->salary=salary;
    }
    void setTeacherID(int teacherID)
    {
        this->teacherID=teacherID;
    }
    void setSubjectSpecialization(string subjectSpecialization)
    {
        this->subjectSpecialization=subjectSpecialization;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    int getTeacherID()
    {
        return teacherID;
    }
    string getSubjectSpecialization()
    {
        return subjectSpecialization;
    }
    float getSalary()
    {
        return salary;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please Enter Teacher ID :"<<endl;
        cin>>teacherID;
        cout<<"Please Enter Subject Specialization :"<<endl;
        cin>>subjectSpecialization;
        cout<<"Please Enter Salary :"<<endl;
        cin>>salary;
    }
    void print()
    {
        Person::print();
        cout<<"The Teacher ID Is :"<<teacherID<<endl;
        cout<<"The Subject Specialization Is :"<<subjectSpecialization<<endl;
        cout<<"The Salary Is :"<<salary<<endl;
    }
};

#endif // TEACHER_H
