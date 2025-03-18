#include <iostream>
using namespace std;
/*
	함수 오버로딩(다중정의) 
	- 이름이 같은데 매개변수 타입이 다르거나, 매개변수의 갯수가 다르면 다른 함수로 인지
*/
int func() {
	return 10;
}
int func(char c) {
	return c;
}
int func(int n) {
	return 10 + n;
}
int func(int n1, int n2) {
	return n1 + n2;
}
//char func(char c) {
//	return c;
//}
// => 오류 발생 (이미 똑같은 함수가 존재함)
int main() {

	cout << func() << endl;
	cout << func('a') << endl;		// 97 ('a')
	cout << func(100) << endl;		// 110
	cout << func(10, 20) << endl;	// 30

	return 0;
}