#include <iostream>
#include <fstream>
#include <string>
#include "Course.h"
#include "Admin.h"
#include "Professor.h"
#include "Functions.h"
using namespace std;

int main()
{
    int num_courses=6; //Number of courses hard coded (initial list)

    Course* available_courses = new Course[200]; //Assuming that the total number of classes in the university is 200
    iniCourses(available_courses); //Initialize the courses list

    int choice;
    loginDisplay(choice); //Displaying available options (admin, professor, student)

    while(choice!=4){ //Program continues till user chooses exit
    if(choice==1)
    {
        //User have logged in as an admin
        Admin mainAdmin;
        AdminProg(mainAdmin,available_courses,num_courses); //Displaying available admin's options (add course, view courses,..)
    }
    else if(choice==2)
    {
        //User have logged in as a student
    }

    else if(choice==3)
    {
        //User have logged in as a professor
        Professor mainProf;
        ProfProg(mainProf,available_courses,num_courses); //Displaying available professor's options (view all courses, view his courses)
    }

    else cout << "\nYou have entered an invalid input" << endl;

    loginDisplay(choice);

    }
    cout<<"Thank you!, see you later"<<endl;

    delete[] available_courses; //deleting the available courses array from memory after finishing execution;
    return 0;
}
