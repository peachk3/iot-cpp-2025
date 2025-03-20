#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
/*
	copyconstructior(복사생성자)
	- 기본 생성자 호출 X
	- 복사 생성사 호출(default 복사 생성자)
*/

class Person {
private:	
	char m_name[20];
	int m_age;
public:
	Person(const char* _name, int _age) {
		printf("Constructor call !!\n");				// 생성자 호출 -> 1번 실행됨(p 객체 만들때)
		strcpy(m_name, _name);
		m_age = _age;
	}
	void printPerson() {
		printf("name: %s, age: %d\n", m_name, m_age);
	}

};
int main() {

	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);				
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}