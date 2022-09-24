#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int calcDifferenceOfSumAndMul() {
    int arr[100];
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int sumOfNumbers = 0;
    int sumOfSqrNums = 0;
    for(int i = 0; i<= arrLength; i++){
      sumOfNumbers += i;
      sumOfSqrNums += i * i;
      cout << "Int  " << i << endl;
    }
    int squareOfSum = sumOfNumbers * sumOfNumbers;

    cout << "Int Sum of numbers " << sumOfNumbers << endl;
    cout << "Int Square of sum " << sumOfSqrNums << endl;
    cout << "Int Difference of sums " << sumOfSqrNums - sumOfNumbers << endl;
    return 0;
}

int main() {
    int limit = 4000000;
    int sum = 0;
    calcDifferenceOfSumAndMul();
    return 0;
}
