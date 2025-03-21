#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
/*
	step 4.
	char 포인터의 name, int타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 name 객체 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
	xman = man이 실행시키시오.
*/
class Human {
private:
	int age;
	char* name;
public:
	Human(int h_age = 0, const char* h_name = " ") {	// 기본 생성자
		printf("constructor 호출\n");
		age = h_age;
		name = new char[strlen(h_name) + 1];
		strcpy(name, h_name);
	}
	Human(const Human& per) {							// 복사 생성자
		printf("copy constructor 호출\n");
		name = new char[strlen(per.name) + 1];			// name 동적 할당
		age = per.age;
		strcpy(name, per.name);
	}
	~Human() {											// 소멸자
		printf("destuctor\n");
		delete[] name;									// name 동적 할당 해제
	}
	void showHuman() {									// showHuman()
		printf("이름: %s, 나이: %d\n", name, age);
	}
	const Human& operator=(const Human& rhs);
};
// 대입 연사자 오버로등
const Human& Human::operator=(const Human& rhs) {			// 동적할당을 했기 때문에 전부 새로 오버로딩해야 함!!
	if (this != &rhs) {
		delete[] name;		// 기존 메모리 해제
		printf("operator overloading\n");	
		this->name = new char[strlen(rhs.name) + 1];		// 새로 동적할당
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}
	return *this;
}
int main() {

	Human h(30, "홍명보");
	h.showHuman();

	Human copyman(h);
	copyman.showHuman();
		
	Human xman;
	xman = copyman;			// 얉은 대입 연산자 실행됨
	xman.showHuman();

	return 0;
}