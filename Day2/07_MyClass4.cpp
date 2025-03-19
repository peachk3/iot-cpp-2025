#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	동적할당 받고 Class 간결하게 작성하기
*/

class MyClass {
private:
	int id;		// mutable (상수화 안에 선언되더라도 상수화시키지 않는 기능 가짐)
	char* name;
	int age;
public:
	MyClass() {}			// 디폴트 생성자
	MyClass(int c_id, const char* c_name, int c_age) {			// const : 건드리지말기!!
	}
	~MyClass() { delete[] name;	}
	// 소멸자 -> 객체를 소멸시킴(자동 호출 - 동적할당 경우 말고는 별도로 작성할 필요 없음)
	// 배열로 동적 해제시 []로 delete 해야 함

	void printData() const;  		// 데이터 출력 함수 -> const화 
	// 함수명() const : 함수 안에서 데이터값 변경하지 마시오!
	
};

MyClass::MyClass(int c_id, const char* c_name, int c_age) {		
	// 클래스명:: 클래스에 소속된 메서드(){}
	// MyClass클래스에 소속되어 있는 메서드 MyClass(생성자)
	id = c_id;		// 속성 = 매개변수						
	name = new char[strlen(c_name) + 1];					// C++ - new 사용해서 동적 메모리 할당	(
	if (name != NULL) {
		strcpy(name, c_name);			// c_name 문자열을 동적할당 받은 name에 복사
	}
	age = c_age;
}

void MyClass::printData() const{		 // MyClass클래스에 소속되어 있는 메서드 printData 
	// const - 상수 멤버 함수(모든 멤버들을 상수화 시킴 - 변경 불허)
	// id = 2;
	cout << "동적할당 받기 id: " << id << ", 이름 : " << name << ", age: " << age << endl;
}

int main() {

	// MyClass 객체 obj 생성하고 , 생성자에 값 넘겨서 초기화
	MyClass obj(1, "김영수", 20);

	// obj객체의 데이터 출력
	obj.printData();

	return 0;
}