#include <iostream>
/*
	멤버함수 연산자 오버로딩 : p1 operator 연산자(p2)
	ex) p1 operator+(p2)
	클래스명 operator연산자(+, -...)(const 클래스명& 객체명) {}
*/
class MyClass {
private:
	int value;
public:
	MyClass(int n): value(n) /* 콜론 초기화 */ {}		// 변환 생성자 (입력을 1개만 받는 생성자)
	MyClass operator+(const MyClass& other) {			// 연산자 오버로딩 (참조 받아야함)
		printf("+ overoading\n");
		return MyClass(value + other.value);
	}
	void showMyClass() {
		printf("value: %d\n", value);
	}

};
int main() {

	MyClass obj(10);				// 초기값을 가지는 객체 생성
	obj.showMyClass();

	MyClass obj2(obj);				// obj를 복사해서 객체 생성 (복사 기본 제공)
	obj2.showMyClass();

	MyClass obj3 = obj2;			// obj를 복사해서 객체 생성 (대입연산자 기본 제공)
	obj3.showMyClass();

	// MyClass obj4 = obj + obj2 + obj3;		// 객체를 더한 결과를 가지고 객체 생성(기본적으로 제공하지 않는 연산자)
	MyClass obj4 = obj + obj2 + obj3;
	//MyClass obj4 = obj.operator+(obj2) + obj3;		
	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);		// overloading 2번 실행됨
	//MyClass obj4 = obj.operator+(obj2);
	obj4.showMyClass();

	return 0;
}