#include<iostream>
#include<cmath>
#include"MapPoint.h"

int MapPoint::number;

MapPoint::MapPoint(const char * n, const double x, const double y):k(x,y){
    l=0;
    for(;n[l++]!=NULL;);
    l++;
    _name = new char [l];
    for(int i=0;i<l;i++)_name[i]=n[i];

    number++;
}


void MapPoint::Print()const{
    std::cout<<"Point: "<<_name<<" ("<<k._x<<", "<<k._y<<")"<<std::endl;
}

Coordinates * MapPoint::GetCoordinatesPtr(){

    return &k;
}

void MapPoint::SetId(const char *n){
    int l=0;
    for(;n[l++]!=NULL;);
    _name = new char [l+1];
    for(int i=0;i<=l;i++)_name[i]=n[i];

}

int MapPoint::NumberOfPoints(){
    return number;

}

double surfaceTriangleArea(const MapPoint * p1, const MapPoint *p2, const  MapPoint *p3){
    double result;
    result = 0.5 * ((p2->k._x - p1->k._x)*(p3->k._y-p1->k._y) - (p3->k._x - p1->k._x)*(p2->k._y-p1->k._y));

    return result;
}
