#include<iostream>
#include<stddef.h>
#include"Point2D.h"


Point2D::Point2D(double x, double y):_x(x),_y(y){}


Point2D Point2D::operator+(Point2D& p){
    Point2D nowy;
    nowy._x = _x+p._x;
    nowy._y = _y+p._y;
    return nowy;

}
Point2D& Point2D::operator--(){
    _x--;
    _y--;
    return *this;
}

Point2D Point2D::operator++(int a){
    Point2D nowy;
    nowy._x = _x;
    nowy._y = _y;
    _x++;
    _y++;
    return nowy;
}

void Point2D::Print(){
    std::cout<<"Point2D:: "<<_x<<"  "<<_y<<std::endl;
}

Point2D operator+(double x, Point2D &p){
     Point2D nowy;
    nowy._x = x+p._x;
    nowy._y = p._y;
    return nowy;
}

void * Point2D::operator new(size_t size){
    std::cout<<"Point2D:: alokowanie "<<size<<" bajtów"<<std::endl;
    return ::new Point2D;
}


void Point2D::operator delete(void *ptr){
    std::cout<<"Point2D:: Zwalnianie wskażnika"<<std::endl;
    ::delete ptr;
}
