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


void replaceStr(char* str1, char str2[]){
    int sizeOfStr1 = getSizeOfStr(str1);
    int sizeOfStr2 = getSizeOfStr(str2);
    int str2Index = 0;
	for(int i = 0; i<= sizeOfStr1; ++i){
	   if(str1[i] != '\0'){
	       if(str2[str2Index]){
	          str1[i] = str2[str2Index];
	          ++str2Index;
	       }else{
   	          str2Index = 1;
 	          str1[i] = str2[0];
	       }
	   }
	}
}

int main() {
    char str1[] = "hello world!";
    char str2[] = "code";
    replaceStr(str1, str2);
	cout<<str1<<endl; // codecodecode

    return 0;
}
