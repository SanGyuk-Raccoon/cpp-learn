#ifndef H_ABSTRACT_EXECUTER
#define H_ABSTRACT_EXECUTER
#include <stdio.h> // to print result
#include <time.h> // to measure sorting time.
#include "DataType.h"
#include "TestObject.h"
#include "ObjectGenerator.h"

/* 
	[Description]
	1) measure SORT execute time
		- you can change N, Min, Max
	2) inform that is Stable Sort Algorithm

	[Limitation]
	1) sort ONLY TestObject(int32)
	2) ONLY by ascending
*/

class AbstractExecuter {
private:
	bool _is_stable;

	virtual char* name() = 0;
	virtual void sortImp(int n, int min, int max) = 0;
	virtual Uint memoryUsage() = 0;
	double sort(int n, int min, int max) {
		// measure time and execute sortImp
	}
	bool validate(int n) {
		// ToDo : validate sort result & check stable/unstable
	}
	


public:
	AbstractExecuter() : _is_stable(false) {}
	virtual ~AbstractExecuter() {}
	void execute(ObjectGenerator& object_generator) {
	/*
		[ToDo]
		- print about sort info
		- copy from Generator's source
		- sort copied arr
		- measure time
		- validate result
	*/
	}
};

#endif // !H_ABSTRACT_EXECUTER
