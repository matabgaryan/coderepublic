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


void moveStr(char* str, int moveCount){
    int sizeOfStr1 = getSizeOfStr(str);

    char tmp[sizeOfStr1] = {};
    if(moveCount == 0){
        cout<<"Return-"<< str <<endl;
    }else{
        int currentIndex = 0;
    	for(int i = 0; i<= sizeOfStr1; ++i){
    	   if(str[i] != '\0' && str[currentIndex] != '\0'){
    	       if(i < moveCount){
    	           tmp[i] = str[sizeOfStr1 - moveCount + i];
    	       }else{
    	           tmp[i] = str[currentIndex];
    	           ++currentIndex;
    	       }
    	   }
    	}
    }
    cout<<"Tmp-"<< tmp <<endl;
}

int main() {
    char str1[] = "hello";
    int moveCount = 2;
    moveStr(str1, moveCount);


    return 0;
}
