#include <iostream>
using namespace std;
void bubbleSort(int array[], int size);

int main(){
    int size;
    cout << "How many numbers in the array?" << endl;
    cin >> size;
    int array[size];
    for(int i = 0; i < size; i++){
        cout << "Enter a number for the array" << endl;
        cin >> array[i];
    }
    bubbleSort(array, size);
    cout << "The array, sorted:" << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
    return 0;
}

void bubbleSort(int array[], int size){
    bool swap = 1;
    while(swap){
        swap = 0;
        for(int i = 0; i < size - 1; i++){
            if(array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swap = 1;
            }
        }
    }
}