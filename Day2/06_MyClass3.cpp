#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	동적할당 받기
*/

class MyClass {
private:
	int id;
	char* name;
	int age;
public:
	MyClass() {}			// 디폴트 생성자
	MyClass(int c_id, const char* c_name, int c_age) {			// const -> 건드리지말기!!
		id = c_id;		// 속성 = 매개변수						
		// name = (char*)malloc(strlen(c_name)+1);				// C 언어 - malloc 사용해서 동적 메모리 할당 (c_name의 길이 + 1(null))
		name = new char[strlen(c_name) + 1];					// C++ - new 사용해서 동적 메모리 할당	(
		// name = c_name										// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없음
		if (name != NULL) {
			strcpy(name, c_name);			// c_name 문자열을 동적할당 받은 name에 복사
		}
		age = c_age;
	}
	~MyClass() {			// 소멸자 -> 객체를 소멸시킴(자동 호출 - 동적할당 경우 말고는 별도로 작성할 필요 없음)
		// free(name)		// C 언어 동적 해제
		delete[] name;		// 배열로 동적 해제시 []로 delete 해야 함
	}

	void printData() {		// 데이터 출력 함수
		cout << "동적할당 받기 id: " << id << ", 이름 : " << name << ", age: " << age << endl;

	}
};

int main() {
	
	// MyClass 객체 obj 생성하고 , 생성자에 값 넘겨서 초기화
	MyClass obj(1, "김영수", 20);

	// obj객체의 데이터 출력
	obj.printData();

	return 0;
}