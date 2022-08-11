#include <iostream>
using namespace std;

int calcTwoFibonacciNumSum(int i) {
    if (i == 1)
        return 1;
    else if (i == 2)
        return 2;
    else return calcTwoFibonacciNumSum(i - 1) + calcTwoFibonacciNumSum(i - 2);
}

int main() {
    int limit = 4000000;
    int sum = 0;
    for (int i = 1; i <= limit; i++){
     int fib = calcTwoFibonacciNumSum(i);
     if(fib > limit) break;
     if(fib % 2 == 0){
        sum += fib;
        cout << "Fib num is " << fib << endl;
     }
    }
    cout << "Sum of numbers " << sum << endl;
    return 0;
}
