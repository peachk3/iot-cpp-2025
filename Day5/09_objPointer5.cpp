#include <iostream>
/*
	��ӿ��� ��ü ������:
	�θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű�� ��ü�� �θ�Ÿ������ ��ĳ���õȴ�.
*/
class Base {
public:
	void show() { printf("Base Class!!\n"); }

};
class Derived : public Base {			
public:
	void show() { printf("Derived Class!!\n"); }				// �������̵�(������)
};
int main() {

	Base* bptr = nullptr;
	Derived* dptr = nullptr;

	Derived obj;							// �Ļ�Ŭ���� ��ü
	dptr = &obj;
	dptr->show();
	
	bptr = &obj;							// �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ų��
	bptr->show();
	//bptr->Derived::show();

	return 0;
}