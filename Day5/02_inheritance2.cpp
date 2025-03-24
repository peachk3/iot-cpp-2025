#include <iostream>
#include <string.h>
using namespace std;
/*
	protected ���� ����� ��ӹ��� �ڽ��� ���� ������
*/
class Human {
protected:
	char name[20];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy_s(name, aname);
		age = aage;
	}
	void getData() {
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
};
class Student : public Human {
private:
	int studentID;
public:
	Student(const char* aname, int aage, int astudentID): Human(aname, aage) {
		studentID = astudentID;
	}
	void showStudent() {
		cout << "�̸�: " << name << ", ����: " << age ;
		cout << ", �й�: " << studentID << endl;
	}
};
int main() {
	Human h("ȫ�浿", 25);
	h.getData();

	Student h2{ "�Ӳ���", 30, 202502 };
	h2.getData();
	h2.showStudent();

	return 0;
}