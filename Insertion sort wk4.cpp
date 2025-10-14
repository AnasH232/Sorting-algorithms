// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertionSort(int arr[],int size){
    for (int i =1; i<size;i++){
        int key = arr[i];
        int j=i-1;
        
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j = j-1;
        }
        arr[j+1]=key;
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
    insertionSort(arr, sz);
    printArr(arr, sz);

    return 0;
}
