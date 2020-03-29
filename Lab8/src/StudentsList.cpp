#include<iostream>
#include"Student.h"
#include"StudentsList.h"

int StudentsList::many;

StudentsList::StudentsList(const char * title){
    string = title;
    list=NULL; 
    
}

StudentsList::StudentsList(StudentsList & origin){

    string = origin.string;

    list = new Student* [many];
    for(int i=0;i<many;i++)list[i]=origin.list[i];

}

StudentsList::StudentsList(StudentsList && origin):string(std::move(origin.string)), list(std::move(origin.list)){}


StudentsList::~StudentsList(){
    delete [] list;
}

void StudentsList::PrintInfo(){
    std::cout<<"[Students List]: "<<string<<std::endl;
    
}

void StudentsList::PrintList(){
    std::cout<<"[Students List]: "<<std::endl;
    for(int i=0;i<many;i++)list[i]->Print();
}


void StudentsList::AddStudent(Student * new_s){
    many++;
    if(list==NULL){
        list = new Student*;
        *list = new_s;
    }
    else{
        Student **temp;
        temp = new Student* [many];
        for(int i=0;i<many-1;i++)temp[i]=list[i];
        temp[many-1]=new_s;
        delete [] list;
        list=temp;
    }
}

