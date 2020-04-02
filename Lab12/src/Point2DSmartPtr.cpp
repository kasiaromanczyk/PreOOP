#include<iostream>
#include"Point2D.h"
#include"Point2DSmartPtr.h"

Point2DSmartPtr::Point2DSmartPtr(Point2D * wsk):ptr(wsk){}

Point2D * Point2DSmartPtr::operator->(){
    return ptr;
}

/*class keeps and returns with -> opretor pointer to Point2D */