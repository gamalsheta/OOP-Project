#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Course.h>
#include <Classroom.h>
#include <Exam.h>
#include <School.h>
using namespace std;
int main()
{
    School sh;
    int x;
    do
    {
        cout<<"Press 0 To Exit"<<endl;
        cout<<"Press 1 To Add Student"<<endl;
        cout<<"Press 2 To Add Teacher"<<endl;
        cout<<"Press 3 To Add Staff"<<endl;
        cout<<"Press 4 To Add Course"<<endl;
        cout<<"Press 5 To Add Class Room"<<endl;
        cout<<"Press 6 To Print All Students"<<endl;
        cout<<"Press 7 To Print All Teachers"<<endl;
        cout<<"Press 8 To Print All Staffs"<<endl;
        cout<<"Press 9 To Print All Courses"<<endl;
        cout<<"Press 10 To Print All Class Rooms"<<endl;
        cin>>x;
        system("cls");
        switch(x)
        {
        case 0:
            cout<<"The Program End Bay Bay"<<endl;
            break;
        case 1:
        {
            Student s;
            s.informations();
            sh.addStudent(s);
            break;
        }
        case 2:
        {
            Teacher t;
            t.informations();
            sh.addTeacher(t);
            break;
        }
        case 3:
        {
            Staff s;
            s.informations();
            sh.addStaff(s);
            break;
        }
        case 4:
        {
            Course c;
            c.informations();
            sh.addCourse(c);
            break;
        }
        case 5:
        {
            Classroom c;
            c.informations();
            sh.addClassRoom(c);
            break;
        }
        case 6:
            sh.printStudent();
            break;
        case 7:
            sh.printTeacher();
            break;
        case 8:
            sh.printStaff();
            break;
        case 9:
            sh.printCourse();
            break;
        case 10:
            sh.printClassRoom();
            break;
        default:
            cout<<"Try Again Press Number From (0 To 10)"<<endl;
        }
    }
    while(x!=0);
}
