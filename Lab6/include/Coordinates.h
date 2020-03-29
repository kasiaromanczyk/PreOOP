#pragma once

class MapPoint;

class Coordinates{
    friend class MapPoint;
    friend double surfaceTriangleArea(const MapPoint *, const MapPoint *, const MapPoint *);

    double _x;
    double _y;

public:
    Coordinates(const double x, const double y);        //constructor
    //setters:
    void Latitude(const double);                    //for latitude
    void Longitude(const double);                   //for longitude
    void Set(const double, const double);           ////for both coordinates

};