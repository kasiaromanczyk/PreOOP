#include<iostream>
#include"HarmonicSeries.h"


SeriesPtr InitializeHarmonicSeries(const Size s){
    SeriesPtr ptr;
    float r=1;
    ptr = new SeriesType[s];
    for(int i=0;i<s;i++){
        ptr[i] = 1/r++;
    }
    
    ile++;
    if(tab!=NULL){
        SeriesPtr *pom = new SeriesPtr[ile];
        
        for(int i=0;i<ile-1;i++)pom[i] = tab[i];
        pom[ile-1]=ptr;
        delete [] tab;
        tab = pom;
    }
    else{
        tab =  new SeriesPtr;
        tab[0]=ptr;
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
    SeriesType result;
    for(int i=1;i<s;i++){
        if(result>ptr[i])result = ptr[i];
    }
    std::cout<<"Min: "<<result<<std::endl;
    return result;

}


void RunAndPrint(SeriesFunctionPtr fun, const SeriesPtr ptr, const Size s ){
    SeriesType x = fun(ptr,s);
}

void DeleteSeries(){
    std::cout<<"Deleting "<<ile<<"series "<<std::endl;
    for(int i=0;i<ile;i++) delete tab[i];
    delete [] tab;
    ile=0;
    std::cout<<"Memory cleaned up "<<std::endl;
}
