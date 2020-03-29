#pragma once
#include<iostream>

class StudentsList;

class Student{
    friend class StudentsList;
    
    const char * first;
    const char * sur;
    static int i;
    int id;

public:
    Student(const char * firstName, const char * surName);
    void Print();

};

