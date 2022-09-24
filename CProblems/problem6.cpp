#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int findEvenNumbers(int arr[], int arrLength){
    for(int i = 1; i < arrLength; i++){
        if(arr[i] % i == 0){
              cout << "Int  is " << arr[i] <<endl;
        }
    }
    return 0;
}

int main() {
    int arr[7] = { 2,4,6,8,9,15,18};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int result = findEvenNumbers(arr, arrLength);

    return 0;
}
