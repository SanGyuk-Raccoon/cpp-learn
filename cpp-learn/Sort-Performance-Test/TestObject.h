#ifndef H_TEST_OBJECT
#define H_TEST_OBJECT
#include "DataType.h"
/*
	[Description]
	1) Object to test Sorting_Performance
	2) for Checking Stable Sort
*/

struct TestObject {
	int value; // for sorting 
	Uint8 rep_index; // for checking Stable Sort

	TestObject() : value(0), rep_index(0) {}
};
#endif // !H_TEST_OBJECT
