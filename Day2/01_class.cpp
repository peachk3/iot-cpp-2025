#include <iostream>
using namespace std;

class A {
public:
	int m_num = 0;				// 멤버변수(속성)

	void set(int num) {
		m_num = num;
	}
	void print() {			// 멤버함수(기능), 메서드
		cout << "나는 A 클래스의 인스턴스입니다.  " << "num: " << m_num << endl;
	}
};

int main() {

	A obj;		// class(type) 클래스 A 타입의 객체 obj 생성!!		객체가 생성되기 위해서는 생성자가 호출되어야 함
				// 호출하지 않으면 생성되지 않음
				// obj는 클래스 A의 인스턴스 (객체 = 인스턴스) 
	
	obj.print(); // 객체 통해서 함수 접근
	obj.set(10);
	obj.print();
	// class가 private 일 경우 3가지 모두 수행 불가
				
	// int n;
	return 0;
}