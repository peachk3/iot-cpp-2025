#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class MyClass {
private:
	int id;
	char name[20];
	int age;

public:
	// const char* dname -> �������� �ʰڴ�! ��� ����
	void setData(int num, const char* dname, int dage) {		// ���ڿ�
		id = num;
		strcpy(name, dname);			// ���ڿ� ���� �Լ�
		age = dage;
	}
	void getData() {
		cout << "num: " << id << ", �̸�: " << name << ", ����: " << age << endl;
	}
};
int main() {
	
	MyClass obj;
	obj.setData(1, "��ö��", 20);
	obj.getData();
	MyClass obj2(2, "�迵��", 20);

	return 0;
}