#include <iostream>
using namespace std;
/*
	������
	������ ȣ��� ��ü�� �������
	��ü ������ ������ �´� �����ڰ� ������ ��ü�� �������� ����
	�����ڴ� �ʱ�ȭ ��ɿ� ���
	�����ڴ� �����ε� ����
	���α׷��Ӱ� �����ڸ� �ۼ��ϸ� �� �̻� ����Ʈ �����ڴ� �������� �ʴ´�.
*/
class MyClass {
private:
	int m_num1;
	int m_num2;
	int m_num3 = 0;

public:
	MyClass(){}									// �⺻ ������
	MyClass(int n1) {
		m_num3 = n1;
	}
	~MyClass() {}								// �Ҹ���
	MyClass(int num1, int num2) {				// ������(�Է��� �� �� �޴�)
		m_num1 = num1;
		m_num2 = num2;
	}
	// ������ - ��� X
	void printData() {
		cout << "���� MyClass�� �ν��Ͻ� �Դϴ�.";
		cout << "m_num1: " << m_num1 << ", m_num2: " << m_num2 << endl;
		cout << "m_num3: " << m_num3 << endl;
	}
};
int main() {

	//MyClass obj;
	 // -> ���� �߻� (�Է��� �� �� �޴� ������ �ֱ� ������ ��� �Ұ�)
	MyClass obj3(10);
	MyClass obj2(100, 200);
	
	obj2.printData();

	return 0;
}