/*
 * Queue
 *
 *  Created on: Oct 12, 2017
 *  Author: Tri Doan
 *  Lab 3
 */

#ifndef Stack_H_
#define Stack_H_

#include <iostream>
#include <cstddef>
#include <assert.h>

using namespace std;

template <class stackdata>
class Stack
{
    public:
        /**constructors and destructors**/

        Stack();

        //initializes an empty stack
        //postcondition: an empty stack

        Stack(const Stack &S);
        //initializes this stack to have same elements as S
        //postcondition: a copy of stack


        ~Stack();
        //frees memory allocated to the stack
        //postcondition: memory for stack has been freed

        /**manipulation procedures**/

        void pop();
        //removes an element from the top of the stack
        //precondition: size != 0
        //postcondition: an element has been removed from the top of the stack

        void push(stackdata data);
        //adds an element to the top of the stack
        //postcondition: an element added to the top of the stack

        /**accessors**/


       bool operator==(const Stack &S);
       //returns whether this stack is equal to another stack S

       stackdata peek() const;
       //returns the element at the top of the stack
       //precondition: size != 0

       int getSize() const;
       //returns the size of the stack

       bool empty() const;
       //returns whether the stack is empty


       /**additional operations**/

       void print() const;
       //prints the elements in the stack each element separate by a blank space to stdout

    private:
       struct Node {
           stackdata data;
           Node* link;

           Node(stackdata ndata) {

data = ndata;
link = NULL;
            }

        };

       Node* top;
       int size;

};
template <class stackdata>
void Stack<stackdata>::pop()	//removeStart
{

}

#endif /* QUEUE_H_ */
