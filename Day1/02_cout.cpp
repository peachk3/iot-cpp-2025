#include <iostream>
using namespace std; // using을 사용해서 std include 

int main() {

	int num = 100;
	char str[100] = "홍길동";
	double d = 3.14;

	std::cout << "abcdefg";				// std -> namespace! (std 범위 안에 있는 cout 객체 사용하겠다!)
	std::cout << num << std::endl;
	std::cout << str << std::endl;
	cout << d << endl;					// 상단에 using으로 include => std 없이도 사용 가능

	return 0;
}