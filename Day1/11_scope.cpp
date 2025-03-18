#include <iostream>
#include "scope.h"
/*
	:: -> 범위지정 연산자
*/
A::A(int aa) {			// A클래스의 A()
	a = aa;
}
void A::AInfo() {		// A클래스의 AInfo()
	std::cout << "a: " << a << std::endl;
}

int main() {

	A a(10);
	a.AInfo();

	return 0;
}