#ifndef Stack_H_
#define Stack_H_

#include <iostream>
#include <cstddef>
#include <assert.h>

using namespace std;

template <class listdata>
class List
{
    public:
    /**Constructors and Destructors*/

    List();
    //Default constructor; initializes and empty list
    //Postcondition: display the empty list.

    ~List();
    //Destructor. Frees memory allocated to the list
    //Postcondition: delete the list and free memory.

    List(const List& list);
    //Copy constructor. Initializes list to have the same elements as another list (makes a copy of the list object)
    //Postcondition: a copy of the linked list is made.


    /**Accessors*/

    listdata getStart() const;
    //Returns the data of the first element
    //Postcondition: Returns the first data in the list
    //Precondition: make sure the list is not empty.

    listdata getStop() const;
    //Returns the data of the last element
    //Postcondition: Returns the last data in the list
    //Precondition: make sure the list is not empty and the node point to NULL.

    listdata getIterator() const;
    //Returns the element currently pointed at by the iterator
    //Precondition: There is at least one element in the linked list

    bool isEmpty() const;
    //Determines whether a list is empty.
    //Postcondition: telling users if the list is empty or not.
    //Precondition: creating a list to check.

    bool offEnd() const;
    //Returns whether the iterator is off the end of the list, i.e. is NULL
    //Postcondition:
	//Precondition:

    int getSize() const;
    //Return the size of the list.
    //Postcondition: Returns the size of the list.
    //Precondition: creating a list to check.

    bool operator==(const List& list);
    //Compares this list to see if it contains the same data, in the same order as another list.

    /**Manipulation Procedures*/
    void removeStop();
    //Removes the value of the last data in the list
    //Precondition: 3 conditions. size is 0, size is 1, and size is greater than 1.
    //Postcondition: if size is 0 then print out error message. If there is only one node then make the node start and stop. Else remove the last item on the list.

    void removeStart();
    //Removes the value of the first data in the list
    //Precondition: 3 conditions. size is 0, size is 1, and size is greater than 1.
    //Postcondition: if size is0 then print out error message. If size is 1 delete the whole list and if size > 1 print out the list without its print item.

    void insertStop (listdata data);
    //Inserts a new data at the end of the list
    //If the list is empty, the new data becomes both first and last
    //Precondition: the list has size of 0 or higher.
    //Postcondition: print out the list with a new data.

    void insertStart(listdata data);
    //Inserts a new data at the start of the list
    //Precondition: the list has size of 0 or higher.
    //Postcondition: print out the list with a new data at the beginning. If the list is empty, the new data becomes both first and last

    void pointIterator();
    //Moves the iterator to the start of the list
    //If the list is empty, the iterator remains NULL
    //Postcondition: a new element is added after where iterator is located.
    //Precondition: There is an iterator.

    void insertIterator(listdata data);
    //Inserts an element after the node currently pointed to by the iterator
    //Precondition: the iterator is pointing to an element
    //Postcondition: a new element is added after where iterator is located

    void deleteIterator();
    //Removes the element currently pointed to by the iterator. Iterator then points to NULL.
    //Precondition: there is an element in the list and the iterator is pointing to it.
    //Postcondition: the element pointing by iterator is removed.

    void advanceIterator();
    //Moves the iterator up by one node towards stop
    //Precondition: has no effect if the iterator is offend or the list is empty
    //Postcondition: the iterator is pointing to the next element

    void reverseIterator();
	//Moves the iterator down by one node towards start.
    //Precondition:has no effect if the iterator is offend or the list is empty
    //Postcondition: the iterator is pointing to the previous element


    /**Additional List Operations*/
    void print() const;
    //Prints to the console the value of each data in the list sequentially
    //and separated by a blank space
    //Prints nothing if the list is empty
    //Prints a empty newline character if it's empty.

    void printNumberedList() const;
    //Prints the contents of the linked list to the screen in the format #: <element> followed by a newline
    //Similar to the print function but with the format #: <element> go along.

    void swap(int num1, int num2);
    //Swap two element in the list.
    //Precondition: Iterator points to a list.
    //Postcondition: The two elements selected are swap.
    private:
       struct Node {
           stackdata data;
           Node* linknext;
           Node* linkprevious;

           Node(stackdata ndata) {

                data = ndata;
                link = NULL;
                iterator = NULL;
            }

        };
        Node* iterator;
       Node* start;
       Node* stop;
       int size;

};


template <class listdata>
void Stack<listdata>::List()
{
    
    
}
template <class listdata>
void Stack<listdata>::removeStart()	//removeStart
{
    assert(size != 0)   
    if(size == 1)
    {
        delete start;
        start = stop = 0;
        size = 0;
    }
    Node* temp = start;
    start = start->linknext;
    start->linkprevious = NULL;
    deelete temp;
    size--;
}

template <class listdata>
void Stack<listdata>::removeStop()
{
    assert(size != 0)
    if(size == 1)
    {
        delete stop;
        start = stop = iterator = NULL;
        size = 0;
    }
    else 
    {
        iterator = stop;
        stop = stop->linkprevious;
        stop->linknext = NULL;
        delete iterator;
        size--;
    }
}


template <class listdata>
void Stack<listdata>::pointiterrator()
{
    iterator = start;
}

template <class listdata>
void Stack<listdata>::()
{
    
}


template<class listdata>
bool List<listdata>::offEnd() const
{
    if(iterator == NULL)
        return true;
    else 
        return false;
}
    
    
template <class listdata>
void Stack<listdata>::insertStar(data)  
{
    if(!offEnd)
    {
        Node* N = new Node(data);
        N->linknext = start;
        start->linkprevious = N;
        start = N;
    }
            size++;
}

template <class listdata>
void Stack<listdat>::insertStop(listdata data)
{
    if(size ==0)
    {
        Node* N = new Node(data);
        start = stop = N;
    }
    else
    {
        Node* N = new Node(data);
        N = stop;
        stop->linknext = N;
        N->linkprevious = stop;
        stop = N;
        size++;
    }
}

template <class listdata>
bool Stack<listdat>::operator==(const List& list)
{
    if(size != list.size)
        return false;
    Node* temp1 = start;
    Node* temp2 = start.list;
    while(temp1 != NULL)
    {    
        temp1 = temp1->linkenxt;
        temp2 = temp2->linknext;
    }
}



#endif /* QUEUE_H_ */
