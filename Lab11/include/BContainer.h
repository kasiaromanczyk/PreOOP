#pragma once
#include<iostream>
#include"Box.h"



class BContainer{
    friend std::ostream& operator<<(std::ostream& t, BContainer cont);
    friend Box larger(BContainer Co);
    Box ** Container;   
    int many;

public:
    BContainer();
    void Insert(Box *);         //adds new box to the container

    Box * operator[](int);      //returns box(pointer to box) from the given position
    
};

std::ostream& operator<<(std::ostream& t, BContainer cont);