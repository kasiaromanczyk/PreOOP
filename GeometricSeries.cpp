#include<iostream>
#include"GeometricSeries.h"


SeriesPtr InitializeGeometricSeries(const Size s,const float r){
    SeriesPtr ptr;
    ptr = new SeriesType[s];
    ptr[0]=1;
    for(int i=1;i<s;i++){
        ptr[i] = r*ptr[i-1];
    }
    return ptr;
}

void PrintSeries(const SeriesPtr ptr, const Size s){
    for(int i=0;i<s;i++){
        std::cout<<ptr[i]<<"    " ;
    }
    std::cout<<std::endl;
}

SeriesType SeriesSum(const SeriesPtr ptr, const Size s){
    SeriesType result=0;
    for(int i=0;i<s;i++){
        result = result + ptr[i];
    }
    std::cout<<"Sum: "<<result<<std::endl;
    return result;

}
SeriesType SeriesProduct(const SeriesPtr ptr, const Size s){
    SeriesType result=1;
    for(int i=0;i<s;i++){
        result = result * ptr[i];
    }
    std::cout<<"Product: "<<result<<std::endl;
    return result;

}
SeriesType SeriesMax(const SeriesPtr ptr, const Size s){
    SeriesType result=ptr[0];
    for(int i=1;i<s;i++){
        if(result<ptr[i])result = ptr[i];
    }
    std::cout<<"Max: "<<result<<std::endl;
    return result;

}
SeriesType SeriesMin(const SeriesPtr ptr, const Size s){
    SeriesType  result=ptr[0];
    for(int i=1;i<s;i++){
        if(result>ptr[i])result = ptr[i];
    }
    std::cout<<"Min: "<<result<<std::endl;
    return result;

}


void RunAndPrint(SeriesFunctionPtr fun, const SeriesPtr ptr, const Size s ){
    SeriesType x = fun(ptr,s);
}

void DeleteSeries(const SeriesPtr *ptr){
    delete *ptr;
}
