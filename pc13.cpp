#include <iostream>
#include <cstddef>
#include <ctime>
#include <cstdlib>
#include "MyVector.h"

using namespace std;
int main()
{
    srand(time(NULL));
    MyVector object;
    for(int i = 0; i < 10; i++)
    {
        int x = (rand() %10) + 1;
        object.push_back(x);
    }
    cout << object.list[1];
    return 0;
}
