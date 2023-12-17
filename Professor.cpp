#include "Professor.h"

Professor::Professor(){}

Professor::~Professor(){}

void Professor::setName(string n)
{
    name=n;
}

string Professor::getName()
{
    return name;
}

void Professor::setNum_of_Courses(int n)
{
    num_Courses=n;
}

int Professor::getNum_of_Courses()
{
    return num_Courses;
}

void Professor::setCourses(Course* c)
{
    for(int i=0; i<num_Courses; i++)
    {
        courses[i] = c[i];
    }
}

void Professor::view_Prof_Courses()
{
    int x=1;
    for(int i=0; i<num_Courses; i++)
    {
       if(courses[i].getProf()==name)
       {
           cout<<"Course #"<<x;
           cout << "ID: "<< courses[i].getID() << ", Name: "<< courses[i].getName() << endl;
           x++;
       }
    }
}

void Professor::view_all_Courses()
{
    ifstream myFile("courses.txt"); // Open a text file named courses to read data in it
    string line;
    while(myFile >> line) // Read each line in the text file and store in a variable named line till last line
        {
            cout<<line<<endl;
        }
    myFile.close(); // Close the text file
}
