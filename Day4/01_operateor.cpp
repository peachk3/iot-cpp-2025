#include <iostream>

class MyClass {
private:
	int m_a, m_b;
	const char* m_name;
public:
	// 생성자에서 기본값 설정
	MyClass(int a = 0, int b = 0) : m_a(a), m_b(b) /*, m_name(name) */ {
		//m_a = a;
		//m_b = b;
		//strcpy(m_name, name);
	}

	// 객체의 내용 출력
	void showMyClass(){
		std::cout << m_a << ", " << m_b << ", " << /*m_name << */std::endl;
	}

};
int main() {

	//MyClass obj{ 1, 2, "홍길동" };
	//obj.showMyClass();

	//MyClass obj2;	
	//obj2 = obj;						// num = 10;, 디폴트 대입 연산자 (연산자 오버로딩)
	//// 객체에 고정된 값이 없는 상황에서 객체를 복사해서 사용
	//// -> 오버로딩이 되기 때문에 가능함
	//obj2.showMyClass();
	
	// MyClass 객체 생성, a, b 값을 전달하고 생성자 호출
	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };

	//MyClass obj3 = obj + obj2;
	// 클래스에 대한 + 연산자는 기본적으로 제공되지 않음
	// => 연산자 오버로딩을 통해 두 객체를 더할 수 있음


	return 0;
}