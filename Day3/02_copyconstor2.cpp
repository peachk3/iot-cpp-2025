#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	복사생성자 - 객체를 복사할 때 호출되는 특별한 생성자
*/
class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		printf("constructor call !!\n");			
		strcpy(this->name, name);					// this-> 작성 가능 (현재 객체의 name에 매개변수 name을 복사)
		this->age = age;
	}
	Person(const Person& other) {					// 매개변수 객체 -> 복사 생성자 계속 생성됨
		// p라는 객체가 ()안에 들어갈 때 p가 아니라 p를 복사한 임시 객체가 생성됨!!
		// (Person other)입력시 무한반복생성함! -> 사용 불가 => &(참조) 붙여야 함
		// // => 정확히는 Person other로 선언하면 복사생성자를 호출하게 되어 재귀적으로 무한 호출 발생
		// 객체가 매개변수인 경우 &(참조)로 전달해줘야 함
		// const 상수화 -> 원본 객체가 변경되지 않도록 보호함
		printf("copy constructor!!\n");				// 복사 생성자 호출
		strncpy(this->name, other.name, strlen(other.name)+ 1);		
		this->age = other.age;						// 전달받은 객체의 age를 복사한 other객체의 age에 넣음
	}
	void printPerson() {
		printf("이름: %s, 나이: %d \n", this->name, this->age);
	}
};

int main() {
	Person p("김영희", 20);				// 일반 생성자 호출
	p.printPerson();

	Person p2(p);						// 복사 생성자 호출 - p의 값을 p2에 복사
	p2.printPerson();

	Person p3(p);						// 복사 생성자 호출 - p의 값을 p3에 복사
	p3.printPerson();
	
	return 0;
}