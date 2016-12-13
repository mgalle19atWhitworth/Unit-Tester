#include "Triangle.h"

// NOTE: This function is deliberately incorrect.

bool isTriangle(int a, int b, int c) {

	// A correct function would return true

	 

	 if (a + b > c && a + c > b && b + c > a)

	 return true;

	 else

	 return false;

}