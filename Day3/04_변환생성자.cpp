#include <iostream>
using namespace std;
/*
	변환 생성자
	다른 타입의 객체로 변환될때 호출하는 생성자.
	입력을 한 개만 가지는 생성자
*/
class MyClass {
private:
	int value;
public:
	MyClass(int value) {
		printf("변환 생성자 호출!\n");
		this->value = value;
	}
	void printMyClass() {
		cout << "value: " << value << endl;
	}
};
int main() {

	MyClass obj = 10;				// int 타입의 class 10 -> MyClass 타입으로 바뀜
	obj.printMyClass();

	MyClass obj2(20);
	obj2.printMyClass();

	return 0;
}