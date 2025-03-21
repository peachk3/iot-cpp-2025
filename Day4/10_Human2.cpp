#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
/*
	step 4.
	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� name ��ü �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
	xman = man�� �����Ű�ÿ�.
*/
class Human {
private:
	int age;
	char* name;
public:
	Human(int h_age = 0, const char* h_name = " ") {	// �⺻ ������
		printf("constructor ȣ��\n");
		age = h_age;
		name = new char[strlen(h_name) + 1];
		strcpy(name, h_name);
	}
	Human(const Human& per) {							// ���� ������
		printf("copy constructor ȣ��\n");
		name = new char[strlen(per.name) + 1];			// name ���� �Ҵ�
		age = per.age;
		strcpy(name, per.name);
	}
	~Human() {											// �Ҹ���
		printf("destuctor\n");
		delete[] name;									// name ���� �Ҵ� ����
	}
	void showHuman() {									// showHuman()
		printf("�̸�: %s, ����: %d\n", name, age);
	}
	const Human& operator=(const Human& rhs);
};
// ���� ������ �����ε�
const Human& Human::operator=(const Human& rhs) {			// �����Ҵ��� �߱� ������ ���� ���� �����ε��ؾ� ��!!
	if (this != &rhs) {
		delete[] name;		// ���� �޸� ����
		printf("operator overloading\n");	
		this->name = new char[strlen(rhs.name) + 1];		// ���� �����Ҵ�
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}
	return *this;
}
int main() {

	Human h(30, "ȫ��");
	h.showHuman();

	Human copyman(h);
	copyman.showHuman();
		
	Human xman;
	xman = copyman;			// ���� ���� ������ �����
	xman.showHuman();

	return 0;
}