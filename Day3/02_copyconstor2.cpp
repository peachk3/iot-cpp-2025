#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	��������� - ��ü�� ������ �� ȣ��Ǵ� Ư���� ������
*/
class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		printf("constructor call !!\n");			
		strcpy(this->name, name);					// this-> �ۼ� ���� (���� ��ü�� name�� �Ű����� name�� ����)
		this->age = age;
	}
	Person(const Person& other) {					// �Ű����� ��ü -> ���� ������ ��� ������
		// p��� ��ü�� ()�ȿ� �� �� p�� �ƴ϶� p�� ������ �ӽ� ��ü�� ������!!
		// (Person other)�Է½� ���ѹݺ�������! -> ��� �Ұ� => &(����) �ٿ��� ��
		// // => ��Ȯ���� Person other�� �����ϸ� ��������ڸ� ȣ���ϰ� �Ǿ� ��������� ���� ȣ�� �߻�
		// ��ü�� �Ű������� ��� &(����)�� ��������� ��
		// const ���ȭ -> ���� ��ü�� ������� �ʵ��� ��ȣ��
		printf("copy constructor!!\n");				// ���� ������ ȣ��
		strncpy(this->name, other.name, strlen(other.name)+ 1);		
		this->age = other.age;						// ���޹��� ��ü�� age�� ������ other��ü�� age�� ����
	}
	void printPerson() {
		printf("�̸�: %s, ����: %d \n", this->name, this->age);
	}
};

int main() {
	Person p("�迵��", 20);				// �Ϲ� ������ ȣ��
	p.printPerson();

	Person p2(p);						// ���� ������ ȣ�� - p�� ���� p2�� ����
	p2.printPerson();

	Person p3(p);						// ���� ������ ȣ�� - p�� ���� p3�� ����
	p3.printPerson();
	
	return 0;
}