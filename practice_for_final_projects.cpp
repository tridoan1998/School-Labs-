#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#include <cstddef>
#include <assert.h>
using namespace std;


template <class queuedata>
class queue
{
   public:
        /**constructors and destructors**/

        Queue();
        //initializes an empty queue
        //postcondition: an empty queue

        Queue(const Queue &queue);
        //initializes queue to have same elements as another queue
        //postcondition: a copy of queue

        ~Queue();
        //frees memory allocated to the queue
        //postcondition: memory for queue has been freed

        /**manipulation procedures**/

        void dequeue();
        //removes an element from the front of the queue
        //precondition:size!=0
        //postcondition: an element has been removed from the front of the queue

        void enqueue(queuedata data);
        //adds an element to the end of the queue
        //postcondition: an element added to the end of the queue

        /**accessors**/

        bool operator==(const Queue &queue);
        //returns whether this queue is equal to another queue

        queuedata getFront() const;
        //returns the element at the front of the queue
        //precondition: size != 0

        int getSize() const;
        //returns the size of the queue

        bool empty() const;
        //returns whether the queue is empty

        /**additional queue operations**/
        void print() const;
        //prints the elements in the queue separated by a blank space to stdout

    private:
    struct Node()
    {
        Node* link;
        queuedata data;
        
        Node(queuedata ndata)
        {
            ndata = data;
            link = NULL;
        }
        Node* front; 
        Node* back;
        int size; 
    }
}

template <class queuedata>
Queue<queuedata>::Queue()
{
    front = back = link = null;
    size = 0;
}

template <class queuedata>
void Queue<queuedata>::enqueue(queuedata data)
{
    if(size == 0)
    {
        Node* N = new Node(data);
        front = back = N;
        size++;
    }
    else 
    {
        Node* N = new Node(data);
        N->link = back;
        back = N;
        size++;
    }
}

template <class queuedata>
void Queue<queuedata>::dequeue()
{
    assert(!empty());
    if(size == 1 )
    {
        delete front;
        front = back = null;
        size = 0;
    }
    else 
    {
        Node* temp = front;
        front= front->link;
        delete temp;
        size--;
    }
}



#endif /* QUEUE_H_ */
