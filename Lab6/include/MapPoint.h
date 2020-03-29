#pragma once
#include<iostream>
#include"Coordinates.h"
#include"MapPoint.h"

class Coordinates;

class MapPoint{
    friend double surfaceTriangleArea(const MapPoint *, const MapPoint *, const MapPoint *);

    
    char *_name;
    Coordinates k;
    int l;
    static int number;

public:
    MapPoint(const char * n="", const double x=0, const double y=0);    //default constructor

    void Print()const;                         //prints info
    Coordinates * GetCoordinatesPtr();      //returns coordinates address
    
    void SetId(const char *);           //sets name
    
    static int NumberOfPoints();        //to count number of points 

};

double surfaceTriangleArea(const MapPoint *, const MapPoint *, const MapPoint *);
