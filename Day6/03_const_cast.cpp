#include <iostream>
/*
	const_cast : const ������ ����
*/
int main() {
	int num = 10;
	std::cout << ++num << std::endl;

	const int num2 = 10;	
	//std::cout << ++num2 << std::endl;  ���� �߻�!! const ���ȭ -> �� ���� �Ұ�

	int* np = const_cast<int*>(&num2);
	*np = *np + 1;
	std::cout << "num2: " << num2 << std::endl;

	const char str[] = "orange";
	char* cp = const_cast<char*>(str);
	cp[0] = 'O';
	std::cout << str << std::endl;

	return 0;
}