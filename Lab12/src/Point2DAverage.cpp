#include<iostream>
#include"Point2D.h"
#include"Point2DSmartPtr.h"
#include"Point2dAverage.h"


PointAverage::PointAverage(){
    sx=0;
    sy=0;
    ile=0;
}

void PointAverage::operator()(Point2D p){
    sx=sx+p._x;
    sy=sy+p._y;
    ile++;

}

void PointAverage::Print(){
    std::cout<<"AveragePoint:: "<<sx/ile<<"  "<<sy/ile<<std::endl;
}

void PointAverage::Reset(){
 sx=0;
 sy=0;
 ile=0;
}
