#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	StaticTest��� Ŭ���� ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
	3�� �Է� �޴� �����ڸ� ����� ȸ����ȣ�� �ڵ����� ������ų ����
	��� ����� showmember() �޼��� �����Ͻÿ�
*/

class StaticTest {
private:
	static int static_cnt;
	char name[20];
	char tel[20];
	char addr[100];
public:
	StaticTest(const char* name, const char* tel, const char* addr);
	static void setStatic_cnt(int cnt);
	void showmember();
};

int StaticTest::static_cnt = 0;

StaticTest::StaticTest(const char* _name, const char* _tel, const char* _addr) {
	strcpy(name, _name);
	strcpy(tel, _tel);
	strcpy(addr, _addr);

	static_cnt++;
}

void StaticTest::setStatic_cnt(int cnt) {
	static_cnt = 0;
}

void StaticTest::showmember() {
	std::cout << "ȸ����ȣ: " << static_cnt << std::endl;

	printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, tel, addr);
}

int main() {

	StaticTest m1("ȫ�浿", "010-1234-1234", "�λ�");
	m1.showmember();
	StaticTest m2("��ö��", "010-1111-1111", "����");
	m2.showmember();
	StaticTest m3("�迵��", "010-9876-5432", "����");
	m3.showmember();
	StaticTest m4("�̼���", "010-1234-5678", "�λ�");
	m4.showmember();

	return 0;
}