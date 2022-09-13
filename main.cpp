#include <iostream>
#include <chrono>
#include "sort.h"
#include <algorithm>
using namespace std; 


int main(){
    srand ( time(NULL) );

    int condicion;
    while(condicion > 0){
        cout<<"----¿Que parte de la tarea desea ejecutar?----\n  1)Parte I\n  2)Parte II\n  0)Cerrar programa\n>>";
        cin>>condicion;

        if(condicion == 0)break;

        if(condicion == 1){
            int tamaño;
            int algoritmo;

            cout<<"----¿Que tamaño desea utilizar?----\n  1)Pequeño (10.000/100.000)\n  2)Grande (100.000/1.000.000)\n  0)Cerrar programa\n>>";
            cin>>tamaño;

            if(tamaño == 0) break;

            if(tamaño == 1){
                cout<< "----¿Que algoritmo desea usar?---- \n  1)Insertion Sort\n  2)Selection Sort\n  3)Quick Sort\n  4)Merge Sort\n  0)Cerrar programa\n>>";
                cin>>algoritmo;

                if(algoritmo == 1){
                    cout << "----INSERTION SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*10000);
                        insertionSort(arr,n*10000);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*10000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 2){
                    cout << "----SELECTION SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*10000);
                        selectionSort(arr,n*10000);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*10000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 3){
                    cout << "----QUICK SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*10000);
                        quickSortFloat(arr,0,(n*10000)-1);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*10000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 4){
                    cout << "----MERGE SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*10000);
                        mergeSort(arr,0,(n*10000)-1);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*10000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 0){
                    break;
                }
                else continue;
            }
            if(tamaño == 2){
                cout<< "----¿Que algoritmo desea usar?---- \n  1)Insertion Sort\n  2)Selection Sort\n  3)Quick Sort\n  4)Merge Sort\n  0)Cerrar programa\n>>";
                cin>>algoritmo;

                if(algoritmo == 1){
                    cout << "----INSERTION SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*100000);
                        insertionSort(arr,n*100000);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*100000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 2){
                    cout << "----SELECTION SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*100000);
                        selectionSort(arr,n*100000);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*100000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 3){
                    cout << "----QUICK SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*100000);
                        quickSortFloat(arr,0,(n*100000)-1);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*100000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 4){
                    cout << "----MERGE SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        float * arr = createRandomArray(n*100000);
                        mergeSort(arr,0,(n*100000)-1);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*100000<<" elementos"<<endl;
                        delete[] arr;
                    }
                }
                if(algoritmo == 0){
                    break;
                }
                else continue;
            }
            else continue;
        }
        if(condicion == 2){
            int algoritmo;
            cout<< "----¿Que algoritmo desea usar?---- \n  1)Quick Sort\n  2)Radix Sort\n  0)Cerrar programa\n>>";
            cin>>algoritmo;
            if(algoritmo==0)break;
            if(algoritmo==1){
                cout << "----QUICK SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        int * arr = createRandomIntArray(n*100000, 0, 99999);
                        quickSort(arr,0,(n*100000)-1);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*100000<<" elementos"<<endl;
                        delete[] arr;
                    }
            }
            if(algoritmo==2){
                cout << "----RADIX SORT----" << endl;
                    for(int n = 1;n<=10;n++){
                        auto start_time = chrono::high_resolution_clock::now();
                        int * arr = createRandomIntArray(n*100000, 0, 99999);
                        radixsort(arr,n*100000);
                        auto end = chrono::system_clock::now();
                        auto end_time = chrono::high_resolution_clock::now();
                        auto time = end_time - start_time;
                        cout<<"Tiempo de ejecucion: "<<time/std::chrono::milliseconds(1) << "ms.\n";
                        cout<<"Para "<<n*100000<<" elementos"<<endl;
                        delete[] arr;
                    }
            }

        }
        else continue;
    }
	return 0;
}
