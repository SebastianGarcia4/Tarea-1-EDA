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

//MERGESORT HAY QUE ARREGLARLO
void merge(float * A, int i, int k, int j){
    float * izq = new float[k-i+1];
    float * der = new float[j-k];

    for(int a = 0; a<j-i+1; a++){
        izq[a] = A[a+i];
    }
    for(int a = 0; a<j-k; a++){
        der[a] = A[a+k+1];
    }

    int p1 = 0;
    int p2 = 0;
    int q = i;

    while(p1 <= k-i+1 && p2 <= j-k){
        if(izq[p1] <= der[p2]){
            A[q] = izq[p1];
            p1++;
        }
        else{
            A[q] = der[p2];
            p2++;
        }
        q++;
    }
    while(p1<=k-i+1){
        A[q] = izq[p1];
        p1++;
        q++;
    }
    while(p2<=j-k){
        A[q] = der[p2];
        p2++;
        q++;
    }
    delete[] der;
    delete[] izq;
}


void mergeSort(float * A, int i, int j){
    if (i >= j) return; 
    auto k = (i + j) / 2;
    mergeSort(A, i, k);
    mergeSort(A, k+1, j);
    merge(A, i, k, j);
} 
//MERGESORT HAY QUE ARREGLARLO

void printArray(float* A, int n){
		for (int i = 0; i < n; i++){
			std::cout<<A[i]<<" ";
		}
		std::cout<<std::endl;
	}

//CREATE RAND ARRAY

float * createArray(int n){
        return new float[n];
}

float* createRandomArray(int n){
    float* A = createArray(n);
    for (int i = 0; i < n; i++){
        A[i] =  std::rand() / static_cast<float>(RAND_MAX);
    }
    return A;
}

int * createRandomIntArray(int n, int minVal, int maxVal){
    int* A = createIntArray(n);
    for (int i = 0; i < n; i++){
        A[i] = getRandomInt(minVal, maxVal);
    }
    return A;
}

// Funcion para encontrar el maximo de un arreglo
int getMax(int * A, int n) {
    int max = A[0];
    for (int i = 1; i < n; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    return max;
}

int* createIntArray(int n){
    return new int[n];
}

// Funcion countSort y radixSort hecho con ayuda de Geeks for Geeks 
// https://www.geeksforgeeks.org/radix-sort/
void countSort(int * A, int n, int exp){
    int * aux = createIntArray(n); // aux Array
    int * count = createIntArray(10);
    for(int i = 0; i<10; i++) {
        count[i] = 0;
        }
    int i;

    // Guardamos las ocurrencias de los numeros en count
    for (i = 0; i<n; i++) {
        count[(A[i] / exp) % 10]++;
        }

    for (i = 1; i<10; i++) {
        count[i] += count[i - 1];
        }

    // Construimos el arreglo aux
    for (i = n-1; i>=0; i--) {
        aux[count[(A[i] / exp) % 10] - 1] = A[i];
        count[(A[i] / exp) % 10]--;
    }

    // Copiamos aux al arreglo A
    for (i = 0; i < n; i++) {
        A[i] = aux[i];
        }
}

void radixsort(int * A, int n){
    // Buscamos el numero mayor para saber la cantidad de digitos
    int m = getMax(A, n);

    for (int exp = 1.0; m / exp > 0; exp *= 10){
    countSort(A, n, exp);
 }
}
