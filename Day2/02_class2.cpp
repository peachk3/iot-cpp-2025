#include <iostream>
using namespace std;

class AClass {
private:
	int n1;
	int n2;

// -> public에 있는 메서드를 통해서 접근해야 함!

public:
	// AClass() {}			// default 생성자
	void setData(int num1, int num2) {
		n1 = num1;
		n2 = num2;
	}
	void getData() {
		cout << "A 클래스의 obj입니다." << endl;
		cout << "n1: " << n1 << ", n2: " << n2 << endl;
	}
};

int main() {

	AClass obj;				// AClass obj(); -> 객체 생성됨(생성자 호출됨) // default 생성자가 생성됨
	// AClass obj(100, 200); 
	// -> 오류 발생 (2개의 값을 받는 생성자가 없기 때문)

	obj.setData(10, 20);
	obj.getData();

	return 0;
}