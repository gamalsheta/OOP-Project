#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <Person.h>
using namespace std;
class Student:public Person
{
private:
    int studentID;
    string gradeLevel;
    float GPA;
public:
    Student()
    {

    }
    Student(int studentID,string gradeLevel,float GPA)
    {
        this->studentID=studentID;
        this->gradeLevel=gradeLevel;
        this->GPA=GPA;
    }
    void setStudentID(int studentID)
    {
        this->studentID=studentID;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGPA(float GPA)
    {
        this->GPA=GPA;
    }
    int getStudentID()
    {
        return studentID;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGPA()
    {
        return GPA;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please Enter Student ID :"<<endl;
        cin>>studentID;
        cout<<"Please Enter Grade Level :"<<endl;
        cin>>gradeLevel;
        cout<<"PLease Enter GPA :"<<endl;
        cin>>GPA;
    }
    void print()
    {
        Person::print();
        cout<<"The Student ID Is :"<<studentID<<endl;
        cout<<"The Grade Level Is :"<<gradeLevel<<endl;
        cout<<"The GPA Is :"<<GPA<<endl;
    }
};

#endif // STUDENT_H
