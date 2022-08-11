#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int binaryRecursiveSearch(int arr[], int leftSide, int rightSide, int intToFind)
{
    if (rightSide >= leftSide) {
        int mid = leftSide + (rightSide - leftSide) / 2;
        // If it is mid
        if (arr[mid] == intToFind)
            return mid;
        // Move left
        if (arr[mid] > intToFind)
            return binaryRecursiveSearch(arr, leftSide, mid - 1, intToFind);
        // Move right
        return binaryRecursiveSearch(arr, mid + 1, rightSide, intToFind);
    }

    return -1;
}

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9 };
    int intToFind = 3;
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int result = binaryRecursiveSearch(arr, 0, arrLength - 1, intToFind);
    cout << "Int index is " << result;

    return 0;
}
