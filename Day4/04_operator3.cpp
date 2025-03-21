#include <iostream>
/*
	����Լ� ������ �����ε� : p1 operator ������(p2)
	ex) p1 operator+(p2)
	Ŭ������ operator������(+, -...)(const Ŭ������& ��ü��) {}
*/
class MyClass {
private:
	int value;
public:
	MyClass(int n): value(n) /* �ݷ� �ʱ�ȭ */ {}		// ��ȯ ������ (�Է��� 1���� �޴� ������)
	MyClass operator+(const MyClass& other) {			// ������ �����ε� (���� �޾ƾ���)
		printf("+ overoading\n");
		return MyClass(value + other.value);
	}
	void showMyClass() {
		printf("value: %d\n", value);
	}

};
int main() {

	MyClass obj(10);				// �ʱⰪ�� ������ ��ü ����
	obj.showMyClass();

	MyClass obj2(obj);				// obj�� �����ؼ� ��ü ���� (���� �⺻ ����)
	obj2.showMyClass();

	MyClass obj3 = obj2;			// obj�� �����ؼ� ��ü ���� (���Կ����� �⺻ ����)
	obj3.showMyClass();

	// MyClass obj4 = obj + obj2 + obj3;		// ��ü�� ���� ����� ������ ��ü ����(�⺻������ �������� �ʴ� ������)
	MyClass obj4 = obj + obj2 + obj3;
	//MyClass obj4 = obj.operator+(obj2) + obj3;		
	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);		// overloading 2�� �����
	//MyClass obj4 = obj.operator+(obj2);
	obj4.showMyClass();

	return 0;
}