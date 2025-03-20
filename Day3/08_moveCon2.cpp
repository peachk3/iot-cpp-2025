#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	�̵� ������(T&&)
	r-value reference�� �Ķ���ͷ� ���� �̵� ������
*/

class Human {
private:
	char name[10];
	int age;
public:
	// �Է� 2�� �޴� ������
	Human(const char* name, int age) {
		cout << "�Է� 2�� �޴� ������ ȣ��!" << endl;
		strcpy(this->name, name);
		this->age = age;
	}
	// ���� ������
	Human(const Human& h) {						// ������ ��ü�� ������ �����ؼ� ��
		cout << "���� ������ ȣ��!" << endl;
		strcpy(this->name, h.name);
		this->age = h.age;
	}
	// �̵� ������
	Human(Human&& h) noexcept {					// ������ ��ü�� ������ ������
		cout << "�̵� ������ ȣ��!" << endl;
		strcpy(this->name, h.name);
		this->age = h.age;

		//h.name = nullptr;
		h.age = 0;
	}
	void printHuman() {
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
};
int main() {

	Human hu("������", 45);
	hu.printHuman();

	// ���� ������
	Human hu2(hu);
	hu2.printHuman();

	// �̵�������
	Human hu3(move(hu)); // (std::move(hu))
	hu3.printHuman();
	hu.printHuman();	// ����: 0 ��µ�


	return 0;
}