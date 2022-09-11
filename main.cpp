#include <iostream>
#include <chrono>
#include "sort.h"

using namespace std; 

int main()
{
    srand ( time(NULL) );
    const int n=1000000;
    float * arr = createRandomArray(n);
    //printArray(arr,n);
    auto start_time = chrono::high_resolution_clock::now();
	//insertionSort(arr,n);
    //selectionSort(arr,n);
    //quickSort(arr,0,n-1);
    mergeSort(arr,0,n-1);
    auto end = chrono::system_clock::now();
    auto end_time = chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    cout<<"Execution time: "<<time/std::chrono::milliseconds(1) << "ms.\n";
    cout<<"Para "<<n<<" elementos"<<endl;
	// printArray(arr,n);

	return 0;
}
