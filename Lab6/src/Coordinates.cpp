#include<iostream>
#include"Coordinates.h"

Coordinates::Coordinates(const double x, const double y):_x(x),_y(y){}

void Coordinates::Latitude(const double  x){
    _x=x;
}


void Coordinates::Longitude(const double y){
    _y=y;
}

void Coordinates::Set(const double x, const double y){
     this->Latitude(x);
     this->Longitude(y);
}