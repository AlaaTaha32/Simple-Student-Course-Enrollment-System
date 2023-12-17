#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include <fstream>
#include <iostream>
#include "Course.h"
using namespace std;

class Admin
{
    private:
        string name;
    public:
        void setName(string);
        string getName();
        Course addCourse();
        void viewCourses(Course c[], int n);
        void writeCourses(Course c[], int n);
        Admin();
        ~Admin();

};

#endif // ADMIN_H
