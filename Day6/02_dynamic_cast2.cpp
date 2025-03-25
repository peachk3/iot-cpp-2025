#include <iostream>
using namespace std;
/*
	dynamic_cast�� �̿��Ͽ� �ٿ�ĳ������ ���� �����Լ��� �־�� ��
*/

class Super {
public:
	virtual void func() { cout << "Super::func()" << endl; }		// �����Լ� 
	void func1() { cout << "Super::func1()" << endl; }
	void fx() { cout << "Super::fx()" << endl; }
};
class Sub : public Super {		// Super Ŭ���� ��� ����
public:
	void func() { cout << "Sub::func()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void fx() { cout << "Sub::fx()" << endl; }
};
int main() {

	Super* sp = new Super{};
	sp->func();
	sp->func1();
	sp->fx();
	cout << "------------------UpCasting---------------------"<< endl;
	Super* sp2 = new Sub{};
	sp2->func();		// Super Ŭ������ func()�� virtual ���� �ڽ� Ŭ������ func() ȣ���
	sp2->func1();
	sp2->fx();
	//sp2->func2();  �����߻�!! -> �ڽ� Ŭ���� ���� �Լ��� ���� �Ұ�
	cout << "------------------Downcasting---------------------" << endl;
	// �����Լ� virtual�� ���ٸ� downcasting�� �Ͼ�� ����
	Sub* sp3 = dynamic_cast<Sub*>(sp2);		// �θ� Ŭ������ �ڽ� Ŭ���� Ÿ������ �ٿ�ĳ����
	sp3->func();
	sp3->func1();		// super
	sp3->func2();
	sp3->fx();
	
	delete sp;
	delete sp2;

	return 0;
}