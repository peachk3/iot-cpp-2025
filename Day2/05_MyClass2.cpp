#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
/*
	�����ڷ� MyClass ���� ����ϱ�
*/
class MyClass {
private:		// ������� (�ܺο��� ���� �Ұ���)
	int id;
	char name[20];
	int age;

public:
	// ������ - MyClass ��ü�� ������ �� ȣ��Ǵ� �Լ�
	MyClass(int cid, const char* cname, int cage){				// ������ (��� X, Ŭ������ �̸��� �Ȱ��� �޼���)
		// �����ڿ� ���޵� �Ű������� ��ü �ʱ�ȭ
		id = cid;												// �Ű������� �� �Ҵ�
		strcpy(name, cname);									// name �迭�� cname ���ڿ� ����
		age = cage;
	}
	// printData �޼��� - ��ü ��� ���� ���
	void printData() {
		cout << "�����ڷ� ��� id: " << id << ", �̸�: " << name << ", age: " << age << endl;
	}

};

int main() {
	// MyClass ��ü ����
	MyClass obj(1, "�迵��", 20);			// �����ڿ� �� �Է� -> �ʱ�ȭ
	
	// obj ��ü�� printdata �޼��� ȣ���ؼ� ������ ���
	obj.printData();

	return 0;
}