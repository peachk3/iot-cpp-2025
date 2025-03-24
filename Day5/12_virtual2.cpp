#include <iostream>
using namespace std;
/*
	virtual Class - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스
*/
class Cinterface {
public:
	Cinterface() { cout << "CInterface constructor" << std::endl; }
	virtual void getData() const = 0;		// 순수 가상 함수
};
class CinSub : public Cinterface {
public:
	CinSub() { cout << "Cinsub constructor" << endl; }
	void getData() const override {
		cout << "Pure Virtual function()" << endl;
	}
};
int main() {

	// Cinterface obj;
	// 오류발생! 추상클래스 -> 순수 가상 함수를 가지고 있기 때문에 객체 생성 불가능

	CinSub obj;
	obj.getData();

	return 0;
}