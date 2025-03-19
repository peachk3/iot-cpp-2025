#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class MyClass {
private:
	int id;
	char name[20];
	int age;

public:
	// const char* dname -> 수정하지 않겠다! 라는 선언
	void setData(int num, const char* dname, int dage) {		// 문자열
		id = num;
		strcpy(name, dname);			// 문자열 복사 함수
		age = dage;
	}
	void getData() {
		cout << "num: " << id << ", 이름: " << name << ", 나이: " << age << endl;
	}
};
int main() {
	
	MyClass obj;
	obj.setData(1, "김철수", 20);
	obj.getData();
	MyClass obj2(2, "김영희", 20);

	return 0;
}