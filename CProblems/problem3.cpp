#include <iostream>
#include <string>

using namespace std;


int calcSumAndMulDifference(int numberValue){
    string intToStr = std::to_string(numberValue);
    int sum = 0;
    int mul = 1;
    for (char ch : intToStr){
      sum += ch - '0';
      mul *= ch - '0';
    }
    return mul - sum;
}

int main() {
    int numValue = 55;
    int result = calcSumAndMulDifference(numValue);

    return 0;
}
