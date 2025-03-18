#include <iostream>
/*
*	디폴트 매개변수 
*/
int func(int num = 0) {		// default 값은 함수의 원형 선언에서만 위치시켜야 함
	return num * num;
}

int main() {
	int res;
	res = func(10);
	std::cout << res << std::endl;

	res = func(0);
	std::cout << res << std::endl;

	res = func();					// 입력 X -> 디폴트 매개변수가 적용됨
	std::cout << res << std::endl;

	return 0;
}