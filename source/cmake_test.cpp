// cmake_test.cpp : Defines the entry point for the application.
//

#include "cmake_test.h"

class Test {
public:
	bool worksFine() {
		auto lamdba = [this]() {
			auto otherLambda = [this]() {
				return returnsTrue();
			};
			return otherLambda();
		};
		return lamdba();
	}
private:
	bool returnsTrue() { return true; }
};

int main()
{
	Test test;
	if (test.worksFine()) {
		std::cout << "Works fine." << std::endl;
	}
	return 0;
}
