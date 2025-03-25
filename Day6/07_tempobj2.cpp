#include <iostream>
using namespace std;
/*
	
*/
class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {
		cout << num << " constructor" << endl;
	}
	~MyClass() { cout << num << " destructor" << endl; }
	void setData(int n) { num = n; }
};
int main() {
	
	// MyClass* ptr = &MyClass{ 10 };
	// MyClass& obj2 = MyClass{ 20 };			// �ӽ� ��ü�� ������ ����� �� ����

	MyClass obj = MyClass{ 10 };				// 10 constructor
	obj.setData(20);							// ������ �Ŀ� ���� �ٲ�� �Ҹ�� 20 destructor

	MyClass&& obj2 = MyClass{ 20 };
	obj2.setData(22);

	const MyClass obj3 = MyClass{ 30 };
	//obj3.setData(33); ���� �߻�!				// ��� ������ �ϹǷ� �� ������ �Ұ���

	cout << "bye ~~ " << endl;

	return 0;
}