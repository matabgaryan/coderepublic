#include <iostream>
using namespace std;

int calculateSquare(int number){
	return number * number;
}

int* storeNumSquare(int numbersArray[], int arrLng){
    int storedArray[arrLng];
	for(int i = 0; i < arrLng; i++){
	    storedArray[i] = calculateSquare(numbersArray[i]);
	}
    return storedArray;
}

int main() {
    int arr[5] = {2,4,5,6,7};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    storeNumSquare(arr, arrLength);
    return 0;
}
