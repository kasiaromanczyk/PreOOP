#pragma once
#include<iostream>
#include"Box.h"
#include"BContainer.h"


class Volume{
    double v;

public:
    Volume();
    double operator()(double x, double y,double z);     //calculates volume straigth from given parameters
    double operator()(Box);                             //calculates volume of the given box
                                                        //both returns the volume as result, type double
};

Box * find_box_optimum(BContainer C, Box (*fun)(BContainer C));     //higher-order function, calls for 'larger'


Box larger(BContainer Co);                                          //callback function, given as the argument