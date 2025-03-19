#include <iostream>
using namespace std;
/*
	생성자
	생성자 호출로 객체가 만들어짐
	객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않음
	생성자는 초기화 기능에 사용
	생성자는 오버로딩 가능
	프로그래머가 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않는다.
*/
class MyClass {
private:
	int m_num1;
	int m_num2;
	int m_num3 = 0;

public:
	MyClass(){}									// 기본 생성자
	MyClass(int n1) {
		m_num3 = n1;
	}
	~MyClass() {}								// 소멸자
	MyClass(int num1, int num2) {				// 생성자(입력을 두 개 받는)
		m_num1 = num1;
		m_num2 = num2;
	}
	// 생성자 - 출력 X
	void printData() {
		cout << "나는 MyClass의 인스턴스 입니다.";
		cout << "m_num1: " << m_num1 << ", m_num2: " << m_num2 << endl;
		cout << "m_num3: " << m_num3 << endl;
	}
};
int main() {

	//MyClass obj;
	 // -> 오류 발생 (입력을 두 개 받는 생성자 있기 때문에 사용 불가)
	MyClass obj3(10);
	MyClass obj2(100, 200);
	
	obj2.printData();

	return 0;
}