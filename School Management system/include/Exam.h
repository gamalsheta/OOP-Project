#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;
class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam()
    {

    }
    Exam(string examName,string courseCode,string examDate)
    {
        this->examName=examName;
        this->courseCode=courseCode;
        this->examDate=examDate;
    }
    void setExamName(string examName)
    {
        this->examName=examName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setExamDate(string examDate)
    {
        this->examDate=examDate;
    }
    string getExamName()
    {
        return examName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getExamDate()
    {
        return examDate;
    }
    void informations()
    {
        cout<<"Please Enter Exam Name :"<<endl;
        cin>>examName;
        cout<<"Please Enter Course Code :"<<endl;
        cin>>courseCode;
        cout<<"Please Enter Exam Date :"<<endl;
        cin>>examDate;
    }
    void print()
    {
        cout<<"The Exam Name Is :"<<examName<<endl;
        cout<<"The Course Code Is :"<<courseCode<<endl;
        cout<<"The Exam Date Is :"<<examDate<<endl;
    }
};

#endif // EXAM_H
