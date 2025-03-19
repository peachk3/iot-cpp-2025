#include <iostream>
/* 멤버초기화 1 상수 */

class ConstClass {
private:
	int m_value;
	const int m_value2;		// 상수 - 선언(객체 생성되기 전)과 동시에 초기화시켜줘야 함, 그 이후에는 변경 불가 ==> 콜론 초기화 사용
	//
public:
	ConstClass(int value, int value2) : m_value2(value2) /* 선언과 동시에 초기화시켜야 함 */{m_value = value; }
	void showValue() {
		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
	}
};

int main() {

	ConstClass obj(10, 20);
	obj.showValue();

	return 0;
}