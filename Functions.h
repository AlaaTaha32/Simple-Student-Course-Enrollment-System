#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;


void loginDisplay(int& choice){
    cout << "\n          Welcome to the Enrollment program!           " << endl;

    cout << "\nDo you want to log in as: \n" << endl;

    cout << "1. Admin" << endl;

    cout << "2. Student" << endl;

    cout << "3. Professor" << endl;

    cout << "4. Exit" <<endl;

    cin >> choice;

}



void iniCourses(Course* avaCourses){
    Course course1("NANENG 430", "Introduction to Microwave Engineering", "Mohamed Farahat");

    Course course2("NANENG 335","Introduction to Photonics","Mohamed Farahat");

    Course course3("NANENG 301","Micro/Nano Fabrication Techniques","Yasmine El-Ogail");

    Course course4("NANENG 312", "Introduction to C/C++ Lab", "Anas Youssef");

    Course course5("NANENG 308", "Solid State Devices", "Yasmine El-Ogail");

    Course course6("SCH 244", "Leadership & Professionalism", "Tawfik Ismail");

    Course initialCourses[6] = {course1, course2, course3, course4, course5, course6};

    for (int i = 0; i < 6; i++){

        avaCourses[i] = initialCourses[i];

    }
}

void ProfProg(Professor mainProf, Course* available_courses,int num_courses)
{
    cout << "          You have logged in as a professor           \n" << endl;
    string name;
    cin.ignore();
    cout<<"Please, Enter your Name: "; // Prompting the name of the professor
    getline(cin, name);
    mainProf.setName(name);
    int ProfChoice;
    mainProf.setNum_of_Courses(num_courses);
    //mainProf.setCourses(available_courses); // Creating the list of courses
    cout<<"\nHello, Dr. "<<mainProf.getName()<<endl;
    cout << "\nDo you want to:\n" <<endl<<"1. View all available courses"<<endl<<"2. View my courses" << endl<<"3. Exit"<<endl;
    cin>> ProfChoice;
    // Program continues to execute till professor chooses exit

    while(ProfChoice!=3)
    {
        switch(ProfChoice){
            case 1:
            // List of courses will be displayed to Professor
            {
                cout<<endl;
                mainProf.view_all_Courses();
                break;
            }
            case 2:
            {
                // List of the professor's courses will be displayed to him
                mainProf.view_Prof_Courses();
                break;
            }
            default:
            {
                cout<<"\nYou have entered an invalid input" << endl;
            }
        }
        cout<<endl;
        cout << "\nDo you want to:\n" <<endl<<"1. View all available courses"<<endl<<"2. View my courses" << endl<<"3. Exit"<<endl;
        cin>> ProfChoice;
    }
        cout<<"You logged out. See You."<<endl;
}



void AdminProg(Admin mainAdmin, Course* available_courses,int num_courses)
{
    cout << "          You have logged in as an admin           \n" << endl;
    string name;
    cin.ignore();
    cout<<"Please, Enter your Name: "; // Prompting the name of the admin
    getline(cin, name);
    mainAdmin.setName(name);
    int AdminChoice;
    cout<<"\nHello, "<<mainAdmin.getName()<<endl;
    cout << "\nDo you want to:\n" <<endl<< "1. Add a new course"<<endl<<"2. View all available courses"<<endl<<"3. Write courses to a file" << endl<<"4. Exit"<<endl;
    cin >> AdminChoice;
    // Program continues to execute till admin chooses exit

    while(AdminChoice!=4)
    {
        switch(AdminChoice){
            case 1:
            // Admin will add a new course data (ID, name, professor)
            {
                Course AddedCourse;
                cout<<endl;
                AddedCourse=mainAdmin.addCourse();
                // Check if the course was added before
                if (AddedCourse.searchCourse(available_courses,num_courses)){
                    cout<<"This course has been already added"<<endl;
                    break;
                }
                num_courses++;
                available_courses[num_courses-1]=AddedCourse;
                cout<<"\nYour course has been added successfully"<<endl;
                break;
            }
            case 2:
            // List of courses will be displayed to Admin
            {
                cout<<endl;
                mainAdmin.viewCourses(available_courses,num_courses);
                break;
            }
            case 3:
            {
                // List of courses will be written in a text file
                mainAdmin.writeCourses(available_courses,num_courses);
                break;
            }
            default:
            {
                cout<<"\nYou have entered an invalid input" << endl;
            }
        }
        cout<<endl;
        cout << "Do you want to:\n" <<endl<< "1. Add a new course"<<endl<<"2. View all available courses"<<endl<<"3. Write courses to a file" << endl<<"4. Exit"<<endl;
        cin >> AdminChoice;
    }
        cout<<"You logged out. See You."<<endl;
}





#endif // FUNCTIONS_H_INCLUDED
