#ifndef H_OBJECT_GENERATOR
#define H_OBJECT_GENERATOR
#include <random>
#include "DataType.h"
#include "TestObject.h"

/*
	[Description]
	1) generate Random TestObject
	2) can generate Same value up to MAX_REP_COUNT
*/

class ObjectGenerator {
private:
	static constexpr int MAX_REP_COUNT = 10;

	int _n, _min, _max;
	TestObject* _source_arr;
	Uint8* _rep_count_arr;

	void clear() {
		if (_source_arr != nullptr) {
			delete[] _source_arr;
			_source_arr = nullptr;
		}
		
		if (_rep_count_arr != nullptr) {
			delete[] _rep_count_arr;
			_rep_count_arr = nullptr;
		}
	}

	void generateImp() {
		_rep_count_arr = new Uint8[_n]{};
		_source_arr = new TestObject[_n]{};
		
		// ToDo : generate Value with Random & Rep count
	}

public:
	ObjectGenerator() : _source_arr(nullptr), _rep_count_arr(nullptr) {}
	~ObjectGenerator() { clear(); }

	void generate(int n, int min, int max) {
		_n = n, _min = min, _max = max;
		clear();
		generateImp();
	}

	// dest's size should be _n
	void getSource(TestObject* dest) {
		memcpy(dest, _source_arr, _n * sizeof(TestObject));
	}

	int size() { return _n; }
	int min() { return _min; }
	int max() { return _max; }
};
#endif // !H_OBJECT_GENERATOR

