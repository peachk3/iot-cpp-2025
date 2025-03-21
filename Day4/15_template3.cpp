#include <iostream>
using namespace std;
/*
	템플릿 typename이 여러 개인 경우
*/
template <typename T, typename T2>		// 두 개의 타입이 다를 경우 typename을 두 개 지정해주면 됨
void func(T a, T2 b) {
	cout << a << endl;
	cout << b << endl;
}

int main() {

	func(10, 3.14);		// 두 개의 타입이 다를 경우
	func("Template", 3.14);
	func<const char*, double>("Hello", 3.1415);

	return 0;
}