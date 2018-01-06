#ifndef MyVector_H_
#define MyVector_H_


#include <iostream>
#include <cstddef>

using namespace std;

class MyVector
{
public:
    int max_size;
    int list_size;
    int* list;
    MyVector();

    ~MyVector();

    void push_back(int i);

    void pop_back();

    int& at(int i);

    void clear();

    int size();
};






#endif /* MyVector_H_ */
