#include <iostream>
/*
	�ٿ�ĳ����: �ڽ� �����ͷ� �θ� ��ü�� ����ų �� ����.
*/
class Base {
	void show() { printf("Base Class"); }
};
class Derived : public Base{
public:
	void show() { printf("Derived Class"); }
};
int main() {

	Base bobj;
	Derived* dptr = nullptr;
	//dptr = &bobj;
	/*
	dptr = (Base*) & bobj;
	dptr->show();
	*/

	dptr = (Derived*) &bobj;
	dptr->show();
	return 0;
}