#include <iostream>
using namespace std;
/*
	move constructior �̵� ������
*/
int main() {

	int n = 10;
	int& rn = n;			// ���۷���, �Ϲ� ����(l-value ����)
	//int& rrn = 10;		// ����� ���� �Ұ���
	const int& ra = 10;		// ����� ���� ����

	int&& rrn = 10; 		// r-value ����

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}