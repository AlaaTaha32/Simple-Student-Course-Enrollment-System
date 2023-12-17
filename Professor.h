#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>
#include <iostream>
#include <fstream>
#include "Course.h"
using namespace std;

class Professor
{
    private:
        string name;
        int num_Courses;
        Course* courses= new Course[num_Courses];
    public:
        Professor();
        ~Professor();
        void setName(string);
        string getName();
        void setNum_of_Courses(int);
        int getNum_of_Courses();
        void setCourses(Course* c);
        void view_all_Courses();
        void view_Prof_Courses();
};

#endif // PROFESSOR_H
