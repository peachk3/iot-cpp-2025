#include <iostream>
/*
	기본 자료형의 형변환으로 컴파일 타임에 타입을 변환
*/
int main() {
	char ch;
	int i = 100;
	float f = 3.14;
	double d = 2.345;

	ch = static_cast<char>(i);			// int --> char 변환
	std::cout << ch << std::endl;		// d 출력
	ch = (char)i;
	std::cout << ch << std::endl;

	d = static_cast<double>(f);
	std::cout << d << std::endl;

	i = static_cast<int>(d);
	std::cout << i << std::endl;
	
	std::cout << typeid(ch).name() << std::endl;
	std::cout << typeid(d).name() << std::endl;
	
	return 0;
}
/*
	static_cast<type-id>(expression)
*/