#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


void findOddNumbers(int start, int end){
    for(int i = start; i <= end; i++){
        if(i % 2 != 0) {
           std::cout<<i<<endl;
        }

    }
}

int main() {
    int start = 3;
    int end = 7;
    findOddNumbers(start, end);
    return 0;
}
