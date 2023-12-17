#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>

using namespace std;



class Course
{
    private:
        string ID;
        string name;
        string prof;

    public:
        void setID(string);
        string getID();
        void setName(string);
        string getName();
        void setProf(string);
        string getProf();
        void printCourse();
        Course(string d, string n, string p);
        Course();
        ~Course();
        bool searchCourse(Course c[],int x);
};

#endif // COURSE_H
