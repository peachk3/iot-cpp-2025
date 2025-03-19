#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
/* step 1. �̸��� ��ȭ��ȣ�� �����Ҵ� */
class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* _pname, int _age, const char* _ptel) {
		pname = new char[strlen(_pname) + 1];				// charŸ���� �迭[����] ���� �޸� �ο� (+ 1�� null ���ڸ� �����ϱ� ����)
		strcpy(pname, _pname);								// strcpy(
		age = _age;
		ptel = new char[strlen(_ptel) + 1];					// charŸ���� �迭[����] ���� �޸� �ο�
		strcpy(ptel, _ptel);
	}
	~Human() {												
		delete[] pname;
		delete[] ptel;
	}
	void getData() {
		cout << "�̸�: " << pname << ", ����: " << age << ", ��ȭ��ȣ: " << ptel << endl;
	}
};

int main() {

	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();

	return 0;
}