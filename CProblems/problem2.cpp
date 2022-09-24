#include <iostream>
#include <string>

using namespace std;

int calcNumbersSum(int numberValue){
    string intToStr = std::to_string(numberValue);
    int sum = 0;
    for (char ch : intToStr) sum += ch - '0';

    return sum;
}

int main() {
    int numValue = 12345;
    int result = calcNumbersSum(numValue);

    return 0;
}
