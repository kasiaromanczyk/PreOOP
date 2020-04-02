#pragma once

class Point2D{
public:
    double _x,_y;

    Point2D(double x=0, double y=0);

    Point2D operator+(Point2D&);            //operator + adds points coordinates
    Point2D& operator--();                  //preincrementation operator
    Point2D operator++(int);                //postincrementation operator
    
    void * operator new(size_t size);       //overloaded new operator
    void operator delete(void *);           //overloaded delete operator


    void Print();

};

Point2D operator+(double, Point2D &);   //operator + for double ant point (double is x coordinate)
