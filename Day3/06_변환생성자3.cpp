#include <iostream>
using namespace std;

class MyClass {
private:
	int value;
public:
	explicit MyClass(int value) {				// 묵시적으로 변환하는 것을 막아줌
		printf("변환 생성자 호출!\n");
		this->value = value;
	}
	void printMyClass() {
		cout << "value: " << value << endl;
	}
};
int main() {

	//MyClass obj = 10;				// 변환생성자 호출 - 객체의 변환이 일어남 
	// -> 오류 발생 (explict 사용해서 변환 불가)
	//obj.printMyClass();

	MyClass obj2{ 10 };				// 명시적 생성자 호출 - 직접 초기화 방식으로는 사용 가능
	obj2.printMyClass();

	return 0;
}