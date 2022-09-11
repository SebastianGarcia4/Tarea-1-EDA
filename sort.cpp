#include <iostream>
#include <ctime>
#include "sort.h"

using namespace std;

//INSERTION SORT
void insertionSort(float * A, int n){
	int i, j;
    float elem;
	for(i=1; i<n; i++){
		elem = A[i];
		j = i - 1;
		while (j>=0 && A[j]>elem){
			A[j+1] = A[j];
			j = j-1;
		}
		A[j+1] = elem;
	}
}
//INSERTION SORT

//SELECTION SORT
void swap(float* A, int i, int j){
		float aux = A[i];
		A[i] = A[j];
		A[j] = aux;
}

void selectionSort(float* A, int n){
    int smallest = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < n - 1; i++){
        smallest = i;
        for (j = i + 1; j < n; j++){
            if (A[j] < A[smallest]){
                smallest = j;
            }
        }
        swap(A,i,smallest);
    }
}

//QUICKSORT
int getRandomInt(int min, int max){
    float a = rand() / static_cast<float>(RAND_MAX);
    return static_cast<int>(a * (max - min) + min + 0.5);
}

int split_qs(float* A, int i, int j){
    /***
     * split for quicksort
     * i,j are the endpoints
     */
    int p = getRandomInt(i, j);

    while (i  < j) {

        while ( i < p && A[i] <= A[p]){
            i = i + 1;
        }

        while ( j > p && A[j] >= A[p]){
            j = j - 1;
        }

        swap(A, i, j);

        if (i == p){
            p = j;
        }
        else if (j == p){
            p = i;
        }
    }
    return p;
}

void quickSort(float* A, int i, int j){
    if (i < j){
        int k = split_qs(A, i, j);
        quickSort(A, i, k-1);
        quickSort(A, k + 1, j);
    }
}

void quickSort(float* A, int n){
    quickSort(A, 0, n - 1);
}

//MERGESORT
void merge(float * A, int i, int k, int j){
    float aux[j-i+1];
    for(int a=0; a<j-i+1;a++){
        A[a]=0;
    }
    int q = 1;
    int p1 = i;
    int p2 = k+1;

    while(p1 <= k && p2 <= j){
        if(A[p1] <= A[p2]){
            aux[q] = A[p1];
            p1++;
        }
        else{
            aux[q] = A[p2];
            p2++;
        }
        q++;
    }
    while(p1<=k){
        aux[q] = A[p1];
        p1++;
        q++;
    }
    while(p2<=j){
        aux[q] = A[p2];
        p2++;
        q++;
    }
}

void mergeSort(float * A, int const i, int const j){
    if (i >= j)
        return; 
    auto k = i + (j - i) / 2;
    mergeSort(A, i, k);
    mergeSort(A, k + 1, j);
    merge(A, i, k, j);
} 
//MERGESORT 

void printArray(float arr[], int n)
{
	int i;
	for (i = 0; i < n; i++){
    }
        cout << i << " " << arr[i] << endl;   
	cout << endl;
}

//CREATE RAND ARRAY

float * createArray(int n){
        return new float[n];
}

float* createRandomArray(int n){
    srand (time(NULL) );
    float* A = createArray(n);
    for (int i = 0; i < n; i++){
        A[i] =  std::rand() / static_cast<float>(RAND_MAX);
    }
    return A;
}
