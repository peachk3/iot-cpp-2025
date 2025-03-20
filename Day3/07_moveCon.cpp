#include <iostream>
using namespace std;
/*
	move constructior 이동 생성자
*/
int main() {

	int n = 10;
	int& rn = n;			// 레퍼런스, 일반 참조(l-value 참조)
	//int& rrn = 10;		// 상수는 참조 불가능
	const int& ra = 10;		// 상수로 참조 가능

	int&& rrn = 10; 		// r-value 참조

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}