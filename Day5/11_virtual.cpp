#include <iostream>
/*
	virtual function : �Ļ�Ŭ�������� �������� ���� ��ӹ��� ��� �Լ��� ���ϸ� Base Ŭ������ ��� �Լ���
	virtual Ű���带 ����Ͽ� �����
	virtual table(���� �Լ��� ��ϵǴ� ���̺�)�� ���������, dynamic binding���� �����Ѵ�.
	���α׷� ���� �� ȣ��� �Լ��� ������ ���� -> ���� ���ε�
*/
using namespace std;

class Base {
public:
	virtual void func1() { cout << "B::func1()" << endl; }			// �����Լ�
	virtual void func2() { cout << "B::func2()" << endl; }			// �����Լ�
	void func3() { cout << "B::func3()" << endl; }	
};
class Derived : public Base {
	/* virtual */void func1() override { cout << "D::func1()" << endl; }			// �����Լ��� �������ϴ� ����Լ��� ��Ÿ��
	void func3() { cout << "D::func3()" << endl; }
	void func4() { cout << "D::func4()" << endl; }
};
int main() {

	Base b;
	Derived d;
	Base* bptr = new Derived();				// upcasting

	bptr->func1();		// D					// baseŬ������ func1()�� �����Լ��� ����Ǿ� Derived Ŭ������ func1()ȣ���
	bptr->func2();		// B					// baseŬ������ func2()�� �����Լ��� ����Ǿ����� �������̵�(������)�� ���� �ʾ���
	bptr->func3();		// B					// ������ Ÿ���� ȣ�� �Լ��� ������

	//bptr->func4();

	delete bptr;
	bptr = &b;
	bptr->func1();		// B
	bptr->func2();		// B
	bptr->func3();		// B

	return 0;
}
/*
	��ü �������� ���������� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ� Ŭ������ ��ü�� ����Ű�� ������ ���� Ŭ���� ����� ���ѵ�
	�̶� �������̵��� �Ļ� Ŭ������ ����� ����ϱ� ���ؼ��� ���� Ŭ������ ��� �Լ��� �����Լ��� ����� ��
	�̰��� �����Ͻ� ������������ ���ε����� ���ϰ� ��Ÿ�ӿ��� �����Ͱ� � ��ü�� ����Ű�� �ִ����� ���� ���ε��� �Լ��� ������
*/