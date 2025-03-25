#include <iostream>
using namespace std;
/*
	reinterpret_cast
	������ -> ������, ������ -> ����, ���� -> �����ͷ� �ϴ� �ַ� ������ ���� ������
*/
int main() {
	int* ip = new int{ 10 };		 
	long lg = reinterpret_cast<long>(ip);			// int* --> long
	unsigned int ui = reinterpret_cast<int>(ip);	// int* --> unsinged int
	printf("ip: %d, lg: %d, ui: %d\n", ip, lg, ui);

	/* x86������ ���� ����*/
	// int* p = reinterpret_cast<int*>(lg);			// long --> int*
	int* p1 = reinterpret_cast<int*>(ui);			
	printf("p1: %d\n", *p1);			// �������� ���


	int* p = new int{ 100 };
	char* pc = reinterpret_cast<char*>(p);
	printf("c: %d\n", *pc);						// int* --> char*

	//delete p;

	int* p2 = reinterpret_cast<int*>(pc);		// char* --> int*
	printf("p: %d", *p2);

	return 0;
}

char ch = 10;
int n = (int)ch;
