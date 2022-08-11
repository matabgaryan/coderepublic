#include <iostream>
using namespace std;

bool isDegreeOfTwo(int num)
{
    if (num == 0)
        return 0;
    while (num != 1)
    {
        if (num % 2 != 0)
            return 0;
        num = num / 2;
    }
    return 1;
}

int main()
{
    bool isDegree = isDegreeOfTwo(32);
    isDegree ? cout<<"isDegree : True" : cout<<"isDegree: False" <<endl;
    return 0;
}
