#include <iostream>
/*
	매크로는 전처리기가 처리하지만 inline 함수는 컴파일러가 처리함
*/
// 동일한 기능 수행!
// 매크로 함수
#define SQUARE(X)	((X)*(X))

// inline 함수
inline int funct(int x) {
	return x * x;
}

int main() {
	
	std::cout << SQUARE(2) << std::endl;
	std::cout << funct(2) << std::endl;		// funct의 위치가 바로 inline으로 감 -> inline의 funct 실행

	return 0;
}