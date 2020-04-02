#pragma once

class BContainer;
class Volume;

class Box{
    friend std::ostream& operator<<(std::ostream& t, BContainer cont);
    friend std::ostream& operator<<(std::ostream& t, Box b);
    friend class Volume;

    double x,y,z;
        
public:
    Box(double a=0, double b=0, double c=0);

    double GetWidth();
    double GetLength();
    double GetHeight();
    
};

std::ostream& operator<<(std::ostream& t, Box b);
