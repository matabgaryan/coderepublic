#include <iostream>
using namespace std;

int main()
{
    int intVal = 1;
    double doubVal = 2.0;
    char charStr = 'c';

    void* array[4] = {&intVal, &doubVal, &charStr};

    cout << "array[0] = " << *(int*)array[0] << endl;
    cout << "array[1] = " << *(double*)array[1] << endl;
    cout << "array[2] = " << *(char*)array[2] << endl;

    return 0;
}
