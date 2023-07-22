module;
#include <stdlib.h>
#include <memory>
#include <vector>
export module code;

import LinearContainer;
import algorithm;
import time;
import io;
import simd;
import Matrix;
import Rational;
import Complex;
import string;
import Polynomial;
import Memory;

using namespace alpha;

struct bas {
	int x;
	bas() {
		print("constructor ");
	}
	~bas() {
		print("destructor ");
	}
};
void fun1(const size_t size) {
	std::vector<int, std::allocator<int>> x;
	x.reserve(size);
}
void fun2(const size_t size) {
	Array<int> x;
	x.reserve(size);
}

export void FUN() {
	int a[] = { 424,122,44352,22,1,6,4443,223,561,669,982,27,6,5,1,2,3,4,5,6,115151,51,56363,234,43,2342,22,6970,18827,28375,11112,5 };
	auto size = sizeof(a) / sizeof(*a);
	time_start();
	for (int i = 0; i < 1000; ++i) {
		for (int k = 0; k < size; ++k) {
			fun1(a[k]);
		}
	}
	time_end();
	std::allocator<int> v;
	
	system("pause");
}