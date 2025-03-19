#include <iostream>
using namespace std;
/*
	변수 초기화
*/
int main() {
	
	int num = 3;			// 복사 초기화
	int num2(30);			// 직접 초기화
	int num3{ 300 };		// 중괄호 직접 초기화
	int num4 = { 3000 };	// 중괄호 복사 초기화

	int x = 3.14;			// 입력값은 3.14이지만 정수형으로 저장됨! => 3 출력
	int x1{ 3.14 };			// 오류 발생함

	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << x << endl;
	cout << x1 << endl;

	return 0;
}