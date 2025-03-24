#include <iostream>
#include <string.h>
/*
	Inheritance(���)
	private, public, protected
	is a(������ �����̴�), has a(����) ���谡 �����ؾ� ��
*/
class Human {// �θ�Ŭ����, ���� Ŭ����, ����Ŭ����
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};
class Student : public Human {			// �ڽ�Ŭ����, �Ļ� Ŭ����, ���� Ŭ����, ����̹��� Ŭ����
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);
	void showStudent();
};
Human::Human(const char* aname, int aage) {	// �ܺο��� �� ���� Ŭ������ �տ� �Է������ ��
	strcpy_s(name, aname);
	age = aage;
}
void Human::getData() {					// Ÿ���� Ŭ���� �տ� ������� ��
	std::cout << "�̸�: " << name << ", ����: " << age << std::endl;
}			
/* ��� ���� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ� */
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage){	// �Ӽ��� ��� �޾ƿ;� �� 
	// �θ� ��ü�� Ŭ������ �����Ǿ� �־�� �ڽ��� �θ��� �Ӽ��� ��ӹ��� �� ���� => �ݷ� �ʱ�ȭ�� �θ��� �Ӽ� �޾ƿ;���!!
	//strcpy(name, aname);
	//age = aage;
	studentID = astudentID;
}
void Student::showStudent() {
	//std::cout << "�̸�: " << name << std::endl;		// ���� �߻�
	std::cout << "�й�: " << studentID << std::endl;
}

int main() {
	Human h("ȫ�浿", 25);
	h.getData();

	Student h2{ "�Ӳ���", 30, 202502 };
	h2.getData();
	h2.showStudent();

	return 0;
}