#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	���ڿ� ó���ϱ�
*/

int main() {

	char str[20] = "ȫ�浿";
	cout << str << endl;

	// ����, �ʱ�ȭ �и�
	char str2[20];
	// str2 = "�迵��";	-> �ٷ� �Է� �Ұ�
	strcpy(str2, "�迵��"); // �����ؼ� str2�� �־�� ��
	cout << str2 << endl;

	//char* str3 = nullptr;
	char str3[100];
	cout << "�̸� �Է� > ";
	cin >> str3;
	cout << str3 << endl;

	const char* name;		// ������ �̿��ؼ� ���ڿ� ����
	name = "��ö��";
	cout << name << endl;

	return 0;
}