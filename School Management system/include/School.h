#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
using namespace std;
class School
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffs[30];
    Course courses[7];
    Classroom classrooms[20];
    int studentCounter=0;
    int teacherCounter=0;
    int staffCounter=0;
    int courseCounter=0;
    int classroomCounter=0;
public:
    void addStudent(Student s)
    {
        students[studentCounter]=s;
        studentCounter++;
    }
    void addTeacher(Teacher t)
    {
        teachers[teacherCounter]=t;
        teacherCounter++;
    }
    void addStaff(Staff s)
    {
        staffs[staffCounter]=s;
        staffCounter++;
    }
    void addCourse(Course c)
    {
        courses[courseCounter]=c;
        courseCounter++;
    }
    void addClassRoom(Classroom c)
    {
        classrooms[classroomCounter]=c;
        classroomCounter++;
    }
    void printStudent()
    {
        for(int i=0; i<studentCounter; i++)
        {
            students[i].print();
            cout<<endl;
        }
    }
    void printTeacher()
    {
        for(int i=0; i<teacherCounter; i++)
        {
            teachers[i].print();
            cout<<endl;
        }
    }
    void printStaff()
    {
        for(int i=0; i<staffCounter; i++)
        {
            staffs[i].print();
            cout<<endl;
        }
    }
    void printCourse()
    {
        for(int i=0; i<courseCounter; i++)
        {
            courses[i].print();
            cout<<endl;
        }
    }
    void printClassRoom()
    {
        for(int i=0; i<classroomCounter; i++)
        {
            classrooms[i].print();
            cout<<endl;
        }
    }
};

#endif // SCHOOL_H
