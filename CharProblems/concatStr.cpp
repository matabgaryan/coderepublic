// Online C++ compiler to run C++ program online
#include<iostream>
#include<string.h>
using namespace std;

int getSizeOfStr(char* str){
    int count = 0;
    while(*str != '\0'){
        ++count;
        ++str;
    }
    return count;
}

void concatStr(char* str1, char* str2){
    int sizeOfStr1 = getSizeOfStr(str1);
    int sizeOfStr2 = getSizeOfStr(str2);


    int currentIndex = 0;
    for(int i = sizeOfStr1; i <= sizeOfStr1 + sizeOfStr2; ++i){
         str1[i] = str2[currentIndex];
         ++currentIndex;
    }
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    concatStr(str1, str2);
	cout<<str1<<endl;

    return 0;
}
