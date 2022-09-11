#pragma once


//INSERTION SORT
void insertionSort(float arr[], int n);

//SELECTION SORT
void swap(float* A, int i, int j);
void selectionSort(float* A, int n);

//QUICKSORT
int getRandomInt(int min, int max);
int split_qs(float* A, int i, int j);
void quickSort(float* A, int i, int j);
void quickSort(float* A, int n);


//MERGESORT
void merge(float array[], int const left, int const mid,
        int const right);

void mergeSort(float array[], int const begin, int const end);

//PRINT ARRAY
void printArray(float* A, int n);

//CREATE RAND ARRAY

float* createArray(int n);

float* createRandomArray(int n);

void merge2(float * A, int i, int k, int j);

