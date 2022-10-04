// Online C++ compiler to run C++ program online
#include <iostream>


int getSizeOfStr(char* str){
    int count = 0;
    while(*str != '\0'){
        ++count;
        ++str;
    }
    return count;
}

char reverseStr(char* str){
    int sizeOfStr = getSizeOfStr(str);
    char temp[sizeOfStr] = {};
    int p = 0;

    for(int i = sizeOfStr; i >= 0; --i){
        if(str[i] != '\0'){
            temp[p] = str[i];
            p +=1;
        }
    }
    std::cout<<temp <<std::endl;
    return *temp;
}

int main() {
    char str[] = "hello";
    char result = reverseStr(str); // olleh
    return 0;
}
