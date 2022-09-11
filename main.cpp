#include <iostream>
#include <chrono>
#include "sort.h"

using namespace std; 

int main()
{
    srand ( time(NULL) );

    // TAMAÑOS PEQUEÑOS
    const int n=10000;
    // const int n=20000;
    // const int n=30000;
    // const int n=40000;
    // const int n=50000;
    // const int n=60000;
    // const int n=70000;
    // const int n=80000;
    // const int n=90000;
    // const int n=100000;

    // TAMAÑOS GRANDES
    // const int n=100000;
    // const int n=200000;
    // const int n=300000;
    // const int n=400000;
    // const int n=500000;
    // const int n=600000;
    // const int n=700000;
    // const int n=800000;
    // const int n=900000;
    // const int n=1000000;

    float * arr = createRandomArray(n);
    auto start_time = chrono::high_resolution_clock::now();

	// insertionSort(arr,n);
    // selectionSort(arr,n);
    // quickSort(arr,0,n-1);
    // mergeSort(arr,0,n-1);

    auto end = chrono::system_clock::now();
    auto end_time = chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    cout << "----INSERTION SORT----" << endl;
    cout << "----SELECTION SORT----" << endl;
    cout << "----QUICK SORT----" << endl;
    cout << "----MERGE SORT----" << endl;

    cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
    cout<<"Para "<<n<<" elementos"<<endl;

	// printArray(arr,n);

	return 0;
}
