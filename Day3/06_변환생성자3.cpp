#include <iostream>
using namespace std;

class MyClass {
private:
	int value;
public:
	explicit MyClass(int value) {				// ���������� ��ȯ�ϴ� ���� ������
		printf("��ȯ ������ ȣ��!\n");
		this->value = value;
	}
	void printMyClass() {
		cout << "value: " << value << endl;
	}
};
int main() {

	//MyClass obj = 10;				// ��ȯ������ ȣ�� - ��ü�� ��ȯ�� �Ͼ 
	// -> ���� �߻� (explict ����ؼ� ��ȯ �Ұ�)
	//obj.printMyClass();

	MyClass obj2{ 10 };				// ����� ������ ȣ�� - ���� �ʱ�ȭ ������δ� ��� ����
	obj2.printMyClass();

	return 0;
}