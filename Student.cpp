#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name

void Student::assignDetails(int ID, char name[]) 
{
  studentId = ID;

  strcpy(studentName,name);
  
}

// Display StudentId and Name

void Student::display() 
{
  cout<<endl<<"Student ID : "<<studentId;
  cout<<endl<<"Student name : "<<studentName;
  
}
