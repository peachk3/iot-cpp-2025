#include <iostream>
using namespace std;
/*
	다른 함수에 선언된 지역변수의 값을 바꾸는 방법 1
*/
void chFunc(int*);

int main() {

	int n = 10;
	cout << "호출 전 n: " << n << endl;
	chFunc(&n);								// 주소를 통해 전달받아야 함
	cout << "호출 후 n: " << n << endl;

	return 0;
}

void chFunc(int* _n) {
	*_n = 20;
}