#include <iostream>
using namespace std;
/*
	����Ʈ ������ : ��ü�� ���� �ֱ⸦ ��ü�� �ñ����� ���α׷����� �޸� ���� �δ��� �ٿ���
	unique_ptr - �������� ���������� �����ϴ� ����Ʈ ������(auto_ptr�� ��ü)

*/
class MyClass {
public:
	MyClass() { cout << "MyClass() ȣ��" << endl; }
	~MyClass() { cout << "~MyClass() ȣ��" << endl; }
};
int main() {
	unique_ptr<MyClass> ptr(new MyClass{});
	unique_ptr<MyClass> ptr2 = move(ptr);

	return 0;
}