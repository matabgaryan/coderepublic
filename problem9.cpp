#include <iostream>
using namespace std;
void handleBubbleSort(int arr[], int arrLength) {
    if (arrLength == 0 || arrLength == 1) {
        return;
    }
    for (int i = 0; i < arrLength - 1; i++)
    {
        if (arr[i] > arr[i + 1]) {
            cout << "Before Swap"  << endl;
            cout << arr[i] <<"--"<<  arr[i + 1]  << endl;
            swap(arr[i], arr[i + 1]);
            cout << "After Swap"  << endl;
            cout << arr[i] <<"--"<<  arr[i + 1]  << endl;
        }
    }
    handleBubbleSort(arr, arrLength - 1);
}
int main()
{
    int arr[9] = {9,4,5,3,6,1,7,8,2};
    handleBubbleSort(arr, 9);
    cout <<"Result"<< endl;
    for (int i = 0; i < 9; i++)
    {
        cout <<arr[i];
    }
    return 0;
}
