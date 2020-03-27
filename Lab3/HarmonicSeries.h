#pragma once
#include<iostream>

typedef int Size;
typedef float * SeriesPtr;
typedef float SeriesType;
typedef SeriesType (*SeriesFunctionPtr)(const SeriesPtr, const Size);

static int ile=0;
static SeriesPtr *tab=NULL;

SeriesPtr InitializeHarmonicSeries(const Size);

void PrintSeries(const SeriesPtr, const Size);

SeriesType SeriesSum(const SeriesPtr, const Size);
SeriesType SeriesProduct(const SeriesPtr, const Size);
SeriesType SeriesMax(const SeriesPtr, const Size);
SeriesType SeriesMin(const SeriesPtr, const Size);


void RunAndPrint(SeriesFunctionPtr, const SeriesPtr, const Size);

void DeleteSeries();


