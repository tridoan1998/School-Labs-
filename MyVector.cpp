#include <iostream>
#include <cstddef>
#include <cstdlib>


#include "MyVector.h"

using namespace std;

MyVector::MyVector()
{
    list = new int [10];
    max_size = 10;
    list_size = 0;
}

MyVector::~MyVector()
{
    delete [] list;
    list = NULL;
}

void MyVector::push_back(int i)
{
    if(list_size < 10)
    {
        list[list_size] = i;
        list_size++;
    }
    else
    {
        cout << "Error!";
        exit(1);
    }
}

void MyVector::pop_back()
{
    if(list_size > 0)
    {
        delete [] list;
        list == NULL;
    }
    else
        exit(1);
}

int MyVector::size()
{
    return list[list_size];
}
