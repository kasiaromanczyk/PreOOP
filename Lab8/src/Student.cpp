#include<iostream>
#include"Student.h"

int Student::i;

Student::Student(const char * firstName, const char * surName){
    first = firstName;
    sur = surName;
    id=++i;
}

void Student::Print(){
    std::cout<<"Student ID= "<<id<<" Name: "<<first<<" Surname: "<<sur<<std::endl;
}
    
