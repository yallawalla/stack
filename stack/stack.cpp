// stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Stack.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int sz = 10;
	Stack s(sz);
	//  s.init() ; // initialize Stack

	// Write doubles into Stack
	int i;
	//  for (i=0 ; i<100 ; i++) {
	for (i = 0; i<sz; i++) {
		cout << "pushing value " << i*i << " in stack" << endl;
		s.push(i*i);
	}
	//Inspect fifo's contents after writing into it
	s.inspect();
	// Count doubles in fifo
	cout << s.nitems() << " values in stack" << endl;

	// Read doubles back from fifo
	while (!s.empty()) {
		double val = s.pop();
		cout << "popping value " << val << " from stack" << endl;
	}
	//Inspect fifo's contents after reading from it
	s.inspect();
	return 0;
}

