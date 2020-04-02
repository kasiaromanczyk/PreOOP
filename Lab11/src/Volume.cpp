#include<iostream>
#include"Volume.h"

Volume::Volume():v(0){}

double Volume::operator()(double x, double y,double z){
    v=x*y*z;
    return v;
}

double Volume::operator()(Box b){
    v=b.x*b.y*b.z;
    return v;
}
    

Box * find_box_optimum(BContainer C, Box (*fun)(BContainer C)){
    Box *result = new Box;
    *result = fun(C);
    return result;
}

Box larger(BContainer Co){
    Volume volume;
    double v;
    double max=0;
    Box result;

    for(int i=0;i<Co.many;i++){
        v=volume(*Co[i]);
        if(v>max){
            max = v;
            result = *Co[i];
        }
    }
    return result;
}

