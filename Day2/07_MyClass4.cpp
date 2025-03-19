#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	�����Ҵ� �ް� Class �����ϰ� �ۼ��ϱ�
*/

class MyClass {
private:
	int id;		// mutable (���ȭ �ȿ� ����Ǵ��� ���ȭ��Ű�� �ʴ� ��� ����)
	char* name;
	int age;
public:
	MyClass() {}			// ����Ʈ ������
	MyClass(int c_id, const char* c_name, int c_age) {			// const : �ǵ帮������!!
	}
	~MyClass() { delete[] name;	}
	// �Ҹ��� -> ��ü�� �Ҹ��Ŵ(�ڵ� ȣ�� - �����Ҵ� ��� ����� ������ �ۼ��� �ʿ� ����)
	// �迭�� ���� ������ []�� delete �ؾ� ��

	void printData() const;  		// ������ ��� �Լ� -> constȭ 
	// �Լ���() const : �Լ� �ȿ��� �����Ͱ� �������� ���ÿ�!
	
};

MyClass::MyClass(int c_id, const char* c_name, int c_age) {		
	// Ŭ������:: Ŭ������ �Ҽӵ� �޼���(){}
	// MyClassŬ������ �ҼӵǾ� �ִ� �޼��� MyClass(������)
	id = c_id;		// �Ӽ� = �Ű�����						
	name = new char[strlen(c_name) + 1];					// C++ - new ����ؼ� ���� �޸� �Ҵ�	(
	if (name != NULL) {
		strcpy(name, c_name);			// c_name ���ڿ��� �����Ҵ� ���� name�� ����
	}
	age = c_age;
}

void MyClass::printData() const{		 // MyClassŬ������ �ҼӵǾ� �ִ� �޼��� printData 
	// const - ��� ��� �Լ�(��� ������� ���ȭ ��Ŵ - ���� ����)
	// id = 2;
	cout << "�����Ҵ� �ޱ� id: " << id << ", �̸� : " << name << ", age: " << age << endl;
}

int main() {

	// MyClass ��ü obj �����ϰ� , �����ڿ� �� �Ѱܼ� �ʱ�ȭ
	MyClass obj(1, "�迵��", 20);

	// obj��ü�� ������ ���
	obj.printData();

	return 0;
}