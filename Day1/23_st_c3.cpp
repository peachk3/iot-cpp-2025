#include <iostream>
/*
	C++ class
*/

class Human {
public:				// 객체지향 - 정보 은닉 특성 해제 (외부에서도 class 접근 가능)
	char name[20];
	int age;
	char job[10];
	
	// 생성자 생성 (출력 X, 클래스 이름과 똑같은 메서드)
	Human() {			// default 생성자 (입력 X)
	}

	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);
	}

};

int main() {

	Human h = { "김철수", 30, "백수" };
	h.showHuman();

	return 0;
}