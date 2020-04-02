#pragma once
#include"Point2D.h"

//keeps smart pointor to Point2D objects

class Point2DSmartPtr{
    Point2D * ptr;

public:
    Point2DSmartPtr(Point2D *wsk);

    Point2D * operator->();
};