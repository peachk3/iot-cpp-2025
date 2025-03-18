#include <iostream>
using namespace std;
/*
* using namespace std;
*/

int main() {

	int num = 10, num2 = 100;
	int& ref = num;				// num의 메모리 공간에 ref라는 별명이 붙음
	int* pn = &num;				// 포인터 선언
	int& rref = ref;
	rref = num2;

	cout << rref<< ", " << num2 << endl;
	// int& rref;				
	// rref = ref;
	// 오류 발생 ->  어디의 이름인지 명시 X
	
	num++;		// 11
	ref++;		// 12
	(*pn)++;	// 13

	cout << "num++: " << num << endl;
	cout << "ref++: " << ref << endl;
	cout << "*(pn)++: " << *pn << endl;

	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;
	// -> 같은 주소가 출력됨

	return 0;
}