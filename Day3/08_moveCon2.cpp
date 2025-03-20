#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	이동 생성자(T&&)
	r-value reference를 파라미터로 갖는 이동 생성자
*/

class Human {
private:
	char name[10];
	int age;
public:
	// 입력 2개 받는 생성자
	Human(const char* name, int age) {
		cout << "입력 2개 받는 생성자 호출!" << endl;
		strcpy(this->name, name);
		this->age = age;
	}
	// 복사 생성자
	Human(const Human& h) {						// 참조할 객체의 데이터 복사해서 옴
		cout << "복사 생성자 호출!" << endl;
		strcpy(this->name, h.name);
		this->age = h.age;
	}
	// 이동 생성자
	Human(Human&& h) noexcept {					// 참조할 객체의 데이터 가져옴
		cout << "이동 생성자 호출!" << endl;
		strcpy(this->name, h.name);
		this->age = h.age;

		//h.name = nullptr;
		h.age = 0;
	}
	void printHuman() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};
int main() {

	Human hu("강감찬", 45);
	hu.printHuman();

	// 복사 생성자
	Human hu2(hu);
	hu2.printHuman();

	// 이동생성자
	Human hu3(move(hu)); // (std::move(hu))
	hu3.printHuman();
	hu.printHuman();	// 나이: 0 출력됨


	return 0;
}