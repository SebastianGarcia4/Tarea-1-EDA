#pragma once


//INSERTION SORT
void insertionSort(float arr[], int n);

//SELECTION SORT
void swap(float* A, int i, int j);
void swapInt(int* A, int i, int j);
void selectionSort(float* A, int n);

//QUICKSORT
int getRandomInt(int min, int max);

int split_qs(int* A, int i, int j);
void quickSort(int* A, int i, int j);
void quickSort(int* A, int n);

int split_qsFloat(float* A, int i, int j);
void quickSortFloat(float* A, int i, int j);
void quickSortFloat(float* A, int n);

//MERGESORT
void merge(float * A, int i, int k, int j);
void mergeSort(float * array, int const begin, int const end);

//PRINT ARRAY
void printArray(int* A, int n);

//CREATE ARRAY
float* createArray(int n);
float* createRandomArray(int n); 
int* createIntArray(int n);
int* createRandomIntArray(int n, int minVal, int maxVal);

//RADIX SORT
int getMax(int * A, int n);
void countSort(int * A, int n, int exp);
void radixsort(int * A, int n);
