/***********************************************************************
 * Header:
 *    Stack
 * Summary:
 *    This class contains the notion of an Stack: a bucket to hold
 *    buffer for the user. This is just a starting-point for more advanced
 *    constainers such as the Stack, set, stack, queue, deque, and map
 *    which we will build later this semester.
 *
 *    This will contain the class definition of:
 *       Stack             : similar to std::Stack
 *       Stack :: iterator : an iterator through the Stack
 * Author
 *    Caleb and Taylor
 ************************************************************************/

#ifndef DEQUE_H
#define DEQUE_H

#include <cassert>  // because I am paranoid

// a little helper macro to write debug code
#ifdef NDEBUG
#define Debug(statement)
#else
#define Debug(statement) statement
#endif // !NDEBUG

namespace custom
{

/************************************************
 * Deque
 * A class that holds stuff
 ***********************************************/
template <class T>
class deque
{
public:

   deque() { numCapacity == 0; iBack == -1; iFront == 0; buffer = NULL;}
   deque(int numCapacity);
   deque(const deque & rhs);
   ~deque() {delete [] buffer;}
   deque & operator = (const deque <T> & rhs) throw (const char *);
   
      
   int size() const {iBack - iFront + 1;}
   void clear();
   bool empty() { return !size(); }
   
   void push_back(const T & t);
   void push_front(const T & t);
   void pop_back();
   void pop_front();
   
   T & front() const;
   T & back() const;   
   
   //private:
   
   T * buffer;
   int iFront;
   int iBack;
   int numCapacity;
   void resize(int numCapacity);
   int capacity() {return numCapacity;}
   int iNormalize(int index);
   int iBackNormalize() const { return iNormalize(iBack); };
   int iFrontNormalize() const { return iNormalize(iFront); };

};

template <class T>
void clear()
{

}

template <class T>
void push_back(const T & t)
{

}

template <class T>
void push_front(const T & t)
{

}

template <class T>
void pop_back()
{

}

template <class T>
void pop_front()
{

}

template <class T>
void resize(int numCapacity)
{

}

template <class T>
int iNormalize(int index)
{
   //if (empty() && numCapacity == 0)
     

}

template <class T>
T& deque<T> :: front() const
{

}
template <class T>
T& deque<T> :: back() const
{

}


}
#endif


// // for normalize
// if index < 
//  + numCapacity 
//  % numCacity