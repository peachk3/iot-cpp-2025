#include <iostream>
using namespace std;
/*
	��ȯ ������
	�ٸ� Ÿ���� ��ü�� ��ȯ�ɶ� ȣ���ϴ� ������.
	�Է��� �� ���� ������ ������
*/
class MyClass {
private:
	int value;
public:
	MyClass(int value) {
		printf("��ȯ ������ ȣ��!\n");
		this->value = value;
	}
	void printMyClass() {
		cout << "value: " << value << endl;
	}
};
int main() {

	MyClass obj = 10;				// int Ÿ���� class 10 -> MyClass Ÿ������ �ٲ�
	obj.printMyClass();

	MyClass obj2(20);
	obj2.printMyClass();

	return 0;
}