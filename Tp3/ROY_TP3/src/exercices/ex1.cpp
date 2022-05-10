#define ISDEBUG
#include "exercices/ex1.hpp"

void ex1() {
	std::cout << "DEBUG(\"test\") : ";
	DEBUG("test");

	std::cout << "MAX(5, 3) : " << MAX(5, 3) << '\n';
}
