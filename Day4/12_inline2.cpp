#include <iostream>
/*
	��ũ�δ� ��ó���Ⱑ ó�������� inline �Լ��� �����Ϸ��� ó����
*/
// ������ ��� ����!
// ��ũ�� �Լ�
#define SQUARE(X)	((X)*(X))

// inline �Լ�
inline int funct(int x) {
	return x * x;
}

int main() {
	
	std::cout << SQUARE(2) << std::endl;
	std::cout << funct(2) << std::endl;		// funct�� ��ġ�� �ٷ� inline���� �� -> inline�� funct ����

	return 0;
}