#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
/*
	copyconstructior(���������)
	- �⺻ ������ ȣ�� X
	- ���� ������ ȣ��(default ���� ������)
*/

class Person {
private:	
	char m_name[20];
	int m_age;
public:
	Person(const char* _name, int _age) {
		printf("Constructor call !!\n");				// ������ ȣ�� -> 1�� �����(p ��ü ���鶧)
		strcpy(m_name, _name);
		m_age = _age;
	}
	void printPerson() {
		printf("name: %s, age: %d\n", m_name, m_age);
	}

};
int main() {

	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);				
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}