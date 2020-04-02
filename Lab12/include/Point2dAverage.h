#pragma once
//functor class

class PointAverage{
    double sx, sy;
    int ile;

public:
    PointAverage();                     //constructor

    void operator()(Point2D );          //adds point's coordinates to count the average
    void Print();                       //prints average of actual points
    void Reset();                       //deletes old data



};

