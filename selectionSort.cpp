// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    int min_i;
    for (int i=0; i<size-1; i++){
        min_i = i;
        for (int j=i+1; j<size; j++){
            if (arr[j]<arr[min_i]) min_i = j;
        }
        if (min_i != i) swap(arr[min_i], arr[i]);
    }
}

void printArr(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[]= {54, 18,23,14,70,20};
    int sz = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, sz);
    printArr(arr, sz);

    return 0;
}
