#include <iostream>
/*
	출력인 경우: 레퍼런스
*/
int& func(int& ref) {
	ref++;
	return ref;					// lvalue
	//return ref++;					// rvalue
}

int main() {

	int n = 10;
	//int& ref = func(n);
	// 출력하는 타입과 동일시 오류 발생 X
	int ref = func(n);

	std::cout << ref << std::endl;

	return 0;
}