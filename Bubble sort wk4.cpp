// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    bool swapped;
    for (int i=0; i<size-1;i++){
       swapped=false; 
        for (int j=0; j<size-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if (!swapped) break;
    }
}

void printArr(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {20,4,17,47,12};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,sz);
    printArr(arr, sz);
    

    return 0;
}