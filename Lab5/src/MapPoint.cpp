#include<iostream>
#include<cmath>
#include"MapPoint.h"


MapPoint::MapPoint(const char * n, const double x, const double y):_x(x),_y(y){
    l=0;
    for(;n[l++]!=NULL;);
    l++;
    _name = new char [l];
    for(int i=0;i<l;i++)_name[i]=n[i];
}

void MapPoint::Print(){
    std::cout<<"Point: "<<_name<<" ("<<_x<<", "<<_y<<")"<<std::endl;
}

void MapPoint::Longitude(const double x){
    _y=x;
}
void MapPoint::Latitude(const double y){
    _x=y;
}
void MapPoint::SetId(const char *n){
    int l=0;
    for(;n[l++]!=NULL;);
    _name = new char [l+1];
    for(int i=0;i<=l;i++)_name[i]=n[i];

}
void MapPoint::Coordinates(const double x, const double y){
    _x=x;
    _y=y;
}

MapDistance MapPoint::Distance(MapPoint s){
    char* text;
    text = new char[l+s.l];

    for(int i=0;i<l-2;i++)text[i]=_name[i];
    text[l-2]='-';
    for(int i=0;i<s.l;i++)text[i+l-1]=s._name[i];
    
    double dx, dy;
    dx=s._x-_x;
    dy=s._y-_y;
    MapDistance result(text, dx,dy);
    return result;
}

MapPoint MapPoint::Farthest(MapPoint a, MapPoint b){

    MapDistance toA, toB;
    toA = this->Distance(a);
    toB= this->Distance(b);

    double farA = sqrt(toA.lx*toA.lx + toA.ly*toA.ly);
    double farB = sqrt(toB.lx*toB.lx + toB.ly*toB.ly);

    if(farA>farB) return a;
    else return b;
}
