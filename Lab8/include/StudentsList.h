#pragma once
#include<iostream>
#include"Student.h"

class StudentsList{
    const char * string;
    Student ** list;
    static int many;
public:
    StudentsList(const char * title);   //constructor
    StudentsList(StudentsList & origin);    //copy constructor
    StudentsList(StudentsList && origin);   //move constructor
    ~StudentsList();                        //destructor
    
    void PrintInfo();   //prints name of list
    void PrintList();   //prints contents of list
    void AddStudent(Student *);     //adds student to the list

    
};
