#include<iostream>
#include"MapDistance.h"

MapDistance::MapDistance(const char * t, double x, double y):lx(x),ly(y){
    int l=0;
    for(;t[l++]!=NULL;);
    text = new char [l+1];
    for(int i=0;i<=l;i++)text[i]=t[i];
}

void MapDistance::Print(){
    std::cout<<"Distance : "<<text<<" ("<<lx<<", "<<ly<<")"<<std::endl;
}

