#pragma once
#include<iostream>

typedef int Size;
typedef float * SeriesPtr;
typedef float SeriesType;
typedef SeriesType (*SeriesFunctionPtr)(const SeriesPtr, const Size);


SeriesPtr InitializeGeometricSeries(const Size,const float);
/*funkcja inicjalizuje nowy ciąg o zadanym rozmiarze i iloczynie*/

void PrintSeries(const SeriesPtr, const Size);
/*funkcja wypisuje elementy ciągu*/

SeriesType SeriesSum(const SeriesPtr, const Size);  /*funkcja zwraca sumę elementów*/
SeriesType SeriesProduct(const SeriesPtr, const Size); /*funkcja zwraca iloczyn elementów*/
SeriesType SeriesMax(const SeriesPtr, const Size); /*funkcja zwraca element największy*/
SeriesType SeriesMin(const SeriesPtr, const Size); /*funkcja zwraca element najmniejszy*/


void RunAndPrint(SeriesFunctionPtr, const SeriesPtr, const Size); /*uruchamia przekazaną funkcję z odpowiednimi parametrami i wypisuje rezultat*/

void DeleteSeries(const SeriesPtr *); /*zwalnia wskaźnik*/


