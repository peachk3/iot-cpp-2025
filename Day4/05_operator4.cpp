#include <iostream>

class MyClass {
private:
	int x, y;
public:
	MyClass(int n1 = 0, int n2 = 0) : x(n1), y(n2) {}

	MyClass add(const MyClass& other) {
		printf("add()\n");
		return MyClass(x + other.x , y + other.y);
	}
	MyClass operator+(const MyClass& other) {
		printf("+ operator\n");
		return MyClass(x + other.x, y + other.y);
	}
	void showMyClass() {
		printf("x: %d, y: %d\n", x, y);
		//printf("value: %d\n", value);
	}
};
int main() {

	MyClass obj(10, 20);
	obj.showMyClass();

	MyClass obj2(20, 30);
	obj2.showMyClass();

	MyClass obj3 = obj.add(obj2);
	obj3.showMyClass();
	MyClass obj4 = obj.operator+(obj3);
	obj4.showMyClass();

	MyClass obj5 = obj4.operator+(100);
	obj5.showMyClass();
	//MyClass obj = 200 + obj5; ���� �Ұ�

	return 0;
}
// �����ε� �� �� ���� ������ 
// -> :: . * sizeof