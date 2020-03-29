#pragma once
#include"MapPoint.h"

class MapPoint;

class MapDistance{
    friend class MapPoint;
    char * text;
    double lx;
    double ly;

public:
    MapDistance(const char * t="None", double x=0, double y=0); //default constructor
    void Print();                                               //prints info
    
};