#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	�����Ҵ� �ޱ�
*/

class MyClass {
private:
	int id;
	char* name;
	int age;
public:
	MyClass() {}			// ����Ʈ ������
	MyClass(int c_id, const char* c_name, int c_age) {			// const -> �ǵ帮������!!
		id = c_id;		// �Ӽ� = �Ű�����						
		// name = (char*)malloc(strlen(c_name)+1);				// C ��� - malloc ����ؼ� ���� �޸� �Ҵ� (c_name�� ���� + 1(null))
		name = new char[strlen(c_name) + 1];					// C++ - new ����ؼ� ���� �޸� �Ҵ�	(
		// name = c_name										// �迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����
		if (name != NULL) {
			strcpy(name, c_name);			// c_name ���ڿ��� �����Ҵ� ���� name�� ����
		}
		age = c_age;
	}
	~MyClass() {			// �Ҹ��� -> ��ü�� �Ҹ��Ŵ(�ڵ� ȣ�� - �����Ҵ� ��� ����� ������ �ۼ��� �ʿ� ����)
		// free(name)		// C ��� ���� ����
		delete[] name;		// �迭�� ���� ������ []�� delete �ؾ� ��
	}

	void printData() {		// ������ ��� �Լ�
		cout << "�����Ҵ� �ޱ� id: " << id << ", �̸� : " << name << ", age: " << age << endl;

	}
};

int main() {
	
	// MyClass ��ü obj �����ϰ� , �����ڿ� �� �Ѱܼ� �ʱ�ȭ
	MyClass obj(1, "�迵��", 20);

	// obj��ü�� ������ ���
	obj.printData();

	return 0;
}