#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
/*
	생성자로 MyClass 만들어서 출력하기
*/
class MyClass {
private:		// 멤버변수 (외부에서 접근 불가능)
	int id;
	char name[20];
	int age;

public:
	// 생성자 - MyClass 객체가 생성될 때 호출되는 함수
	MyClass(int cid, const char* cname, int cage){				// 생성자 (출력 X, 클래스와 이름이 똑같은 메서드)
		// 생성자에 전달된 매개변수로 객체 초기화
		id = cid;												// 매개변수에 값 할당
		strcpy(name, cname);									// name 배열에 cname 문자열 복사
		age = cage;
	}
	// printData 메서드 - 객체 멤버 변수 출력
	void printData() {
		cout << "생성자로 출력 id: " << id << ", 이름: " << name << ", age: " << age << endl;
	}

};

int main() {
	// MyClass 객체 생성
	MyClass obj(1, "김영희", 20);			// 생성자에 값 입력 -> 초기화
	
	// obj 객체의 printdata 메서드 호출해서 데이터 출력
	obj.printData();

	return 0;
}