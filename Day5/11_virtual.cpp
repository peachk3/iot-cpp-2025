#include <iostream>
/*
	virtual function : 파생클래스에서 재정의할 것을 약속받은 멤버 함수를 말하며 Base 클래스의 멤버 함수에
	virtual 키워드를 사용하여 만든다
	virtual table(가상 함수가 등록되는 테이블)이 만들어지고, dynamic binding으로 동작한다.
	프로그램 실행 중 호출된 함수가 결정될 형태 -> 동적 바인딩
*/
using namespace std;

class Base {
public:
	virtual void func1() { cout << "B::func1()" << endl; }			// 가상함수
	virtual void func2() { cout << "B::func2()" << endl; }			// 가상함수
	void func3() { cout << "B::func3()" << endl; }	
};
class Derived : public Base {
	/* virtual */void func1() override { cout << "D::func1()" << endl; }			// 가상함수를 재정의하는 멤버함수를 나타냄
	void func3() { cout << "D::func3()" << endl; }
	void func4() { cout << "D::func4()" << endl; }
};
int main() {

	Base b;
	Derived d;
	Base* bptr = new Derived();				// upcasting

	bptr->func1();		// D					// base클래스의 func1()은 가상함수로 선언되어 Derived 클래스의 func1()호출됨
	bptr->func2();		// B					// base클래스의 func2()은 가상함수로 선언되었지만 오버라이딩(재정의)이 되지 않았음
	bptr->func3();		// B					// 포인터 타입의 호출 함수가 결정됨

	//bptr->func4();

	delete bptr;
	bptr = &b;
	bptr->func1();		// B
	bptr->func2();		// B
	bptr->func3();		// B

	return 0;
}
/*
	객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 접근은 기초 클래스 멤버로 제한됨
	이때 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 됨
	이것은 컴파일시 포인터형으로 바인딩되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서 바인딩할 함수를 결정함
*/