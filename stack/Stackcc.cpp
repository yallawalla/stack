#include "stdafx.h"
#include <iostream>
using namespace std ;
#include "Stack.h"

//void Stack::init() { count = 0 ; }
int Stack::nitems() { return count ; }
bool Stack::full() { return (count==LEN) ; }
bool Stack::empty() { return (count==0) ; }

void Stack::push(double c) { 
  if (full()) {
    cout << "Stack::push() Error: stack is full" << endl ;
    return ;
  }
  s[count++] = c ;
}

double Stack::pop() { 
  if (empty()) {
    cout << "Stack::pop() Error: stack is empty" << endl ;
    return 0 ;
  }    
  return s[--count] ;
}
// e)
void Stack::inspect() {
  for (int i = count; i > 0; i--)
    cout << "Value " << s[i-1] << " is at position " << i - 1 << endl;
}
