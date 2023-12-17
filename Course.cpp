#include "Course.h"


Course::Course(string d, string n, string p):ID(d), name(n), prof(p)
{
}

Course::Course()
{
}

Course::~Course()
{
}

void Course::setID(string d)
{
    ID=d;
}

string Course::getID()
{
    return ID;
}

void Course::setName(string n)
{
    name=n;
}

string Course::getName()
{
    return name;
}

void Course::setProf(string p)
{
    prof=p;
}

string Course::getProf()
{
    return prof;
}

void Course::printCourse()
{
    cout << "ID: "<< ID<< ", Name: "<< name<< ", prof: " << prof << endl;
}

bool Course::searchCourse(Course* c,int x)
{
    for(int i=0; i<x; i++){
        if(c[i].getID() == ID) return true;
    }
    return false;
}
