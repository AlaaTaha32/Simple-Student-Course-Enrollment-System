#include "Admin.h"
#include "Course.h"
#include <fstream>

Admin::Admin(){}
Admin::~Admin(){}

void Admin::setName(string n){
    name=n;
}
string Admin::getName(){
    return name;
}

Course Admin::addCourse(){

string CourseID,CourseName,CourseProf;
cin.ignore();

//1) use the input parameters d, n, p to instantiate a course *dynamically*.
cout<<"Enter the Course ID:";
getline(cin, CourseID);

cout<<"\nEnter the Course Name:";
getline(cin, CourseName);

cout<<"\nEnter Professor Name:";
getline(cin, CourseProf);

Course New_Course(CourseID,CourseName,CourseProf);


//2) return the new course to be stored in the storage array.
return New_Course;
}

void Admin::viewCourses(Course c[],int n)
{
    for(int i = 0; i < n; i++){
        cout <<"Course #"<< i+1 << ": ";
        c[i].printCourse();
        cout<<endl;}
}

void Admin::writeCourses(Course c[],int n)
{
    ofstream myFile("courses.txt"); // Open a text file named courses to write data in it
    if(myFile.is_open())
    {
       for(int i=0; i<n; i++)
        {
            // Write list of courses in the file
            myFile<<"Course #"<< i+1 << ": "<< "ID: "<< c[i].getID()<< ", Name: "<< c[i].getName()<< ", prof: " << c[i].getProf() << endl;
        }
        myFile.close(); // Close the text file
    }
    cout<<"\nList of courses has been written in a text file successfully"<<endl;
}


