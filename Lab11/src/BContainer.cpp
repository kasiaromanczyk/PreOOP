#include<iostream>
#include"BContainer.h"

BContainer::BContainer(){
    Container = NULL;
    many =0;
}

void BContainer::Insert(Box *ptr){
    if(Container==NULL){
        Container = new Box*;
        *Container = ptr;
        many++;
    }
    else{
        many++;
        Box ** temp = new Box * [many];
        for(int i=0;i<many-1;i++)temp[i]=Container[i];
        temp[many-1]=ptr;
        delete [] Container;
        Container = temp;
    }
}

Box * BContainer::operator[](int x){
    return Container[x];
}

std::ostream& operator<<(std::ostream& t, BContainer cont){
    t<<"Box Container: "<<std::endl;
    for(int i=0;i<cont.many;i++){
        t<<"["<<i<<"]"<<*cont.Container[i];
    }
    return t;
}