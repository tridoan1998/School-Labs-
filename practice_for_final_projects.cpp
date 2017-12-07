
#include <iostream>
using namespace std;

template <class listdata>
class List()
{
private:
    struct Node()
    {
        Node* linknext; 
        Node* linkprevious;
        listdata data;
        
        Node(listdata newdata){
            data = newdata;
            linknext = null;
            linkprevious = null;
        }
        Node* start;
        Node* stop;
        Node* Iterator;
        int size;
    }
}

template <class listdata>
List<listdata>::List()
{
    start = stop = null;
    size = 0;
}
template < class listdata>
List<listdata>::~List()
{
    Iterator = start;
    Node* temp = null;
    while(Iterator !=null)
    {
        temp = Iterator->linknext;
        delete Iterator;
        Iterator = temp;
    }
}

template <class listdata>
List<listdata>::print()
{
    Node* temp = start;
    while(temp != null)
    {
        cout << temp->data << " ";
        temp = temp->linknext;
    }
}

template <class listdata>
List<listdata>::insertStart()
{
    Node* N = new Node(data);
    if(size == 0)
    {
        start = stop = N;
        
    }
    else 
    {
        N->linknext = start;
        start->linkprevious = N;
        start = N;
    }
    size++;
}

template <class listdata>
List<listdata>::insertStop()
{
    if(size == 0)
    {
        Node* N = new Node(data);
        start  = stop = N;
    }
    else
    {
        Node* N = new Node(data);
        N->linkprevious = stop;
        stop->linknext = N;
        stop = N;
    }
    size++;
}

template <class listdata>
List<listdara>::removeStart()
{
    assert(size != 0);
    if(size == 1)
    {
        start = stop = iterator =  null;
    }
    else 
    {
        Node* temp = start; 
        start = start->linknext;
        start->linkprevious = null;
        delete temp;
    }
    size++;
}

template <class listdata>
List<listdata>::removeStop()
{
    assert(size !=0)
    if(size == 1)
    {
        delete start;
        start  = stop = iterator = null;
    }
    else
    {
        Nod* temp = stop;
        stop = stop->linkprevious;
        stop->linknext= null;
        delete temp;
    }
    size--;
}

template <class listdata>
bool List<listdata>::isempty()
{
    return size == 0;
}

template <class listdata>
listdata List<listdata>::getIterator()
{
    assert(size != 0)
    if(offend())
    {
        cout << "Iterator is offend";
        return -1;
    }
    else
        return Iterator->data;
}

template <class listdata>
void List<listdata>::deleteIterator()
{
    assert( size != 0);
    assert(!offEnd());
    if(Iterator == start)
    {
        removeStart();
        size--;
    }
    else if(Iterator == stop)
    {
        removeStop();
        size--;
    }
    else 
    {
        Iterator->linknext->linkprevious = Iterator->linknprevious;
        Iterator->linkprevious->linknext = Iterator->linknext;
        delete Iterator;
        Iterator = null;
        size--;
    }
}   

