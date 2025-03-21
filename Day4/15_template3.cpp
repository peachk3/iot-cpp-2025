#include <iostream>
using namespace std;
/*
	���ø� typename�� ���� ���� ���
*/
template <typename T, typename T2>		// �� ���� Ÿ���� �ٸ� ��� typename�� �� �� �������ָ� ��
void func(T a, T2 b) {
	cout << a << endl;
	cout << b << endl;
}

int main() {

	func(10, 3.14);		// �� ���� Ÿ���� �ٸ� ���
	func("Template", 3.14);
	func<const char*, double>("Hello", 3.1415);

	return 0;
}