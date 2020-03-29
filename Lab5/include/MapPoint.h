#pragma once
#include"MapDistance.h"
#include"MapPoint.h"

class MapDistance;

class MapPoint{
    char *_name;
    double _x;
    double _y;
    int l;

public:
    MapPoint(const char * n="", const double x=0, const double y=0);    //default constructor


    void Print();       //prints info about city's coordinates
    void Longitude(const double);       //sets longitude
    void Latitude(const double);        //sets latitude
    void SetId(const char *);           //sets name
    void Coordinates(const double, const double);       //sets both coordinates

    MapPoint Farthest(MapPoint, MapPoint);      //returns point farther from "this" point
    MapDistance Distance(MapPoint);     //returns distance between two points
};
