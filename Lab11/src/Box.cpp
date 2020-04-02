#include<iostream>
#include"Box.h"

Box::Box(double a, double b, double c):x(a),y(b),z(c){}

    double Box::GetWidth(){
        return x;
    }
    double Box::GetLength(){
        return y;
    }
    double Box::GetHeight(){
        return z;
    }

std::ostream& operator<<(std::ostream& t, Box b){
        t<<"Box(length: "<<b.x<<", width: ";
        t<<b.y<<", heigth: "<<b.z<<")"<<std::endl;
    
    return t;
}
