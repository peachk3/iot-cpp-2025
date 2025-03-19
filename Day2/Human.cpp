#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
/* step 1. 이름과 전화번호는 동적할당 */
class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* _pname, int _age, const char* _ptel) {
		pname = new char[strlen(_pname) + 1];				// char타입의 배열[길이] 동적 메모리 부여 (+ 1은 null 문자를 포함하기 위함)
		strcpy(pname, _pname);								// strcpy(
		age = _age;
		ptel = new char[strlen(_ptel) + 1];					// char타입의 배열[길이] 동적 메모리 부여
		strcpy(ptel, _ptel);
	}
	~Human() {												
		delete[] pname;
		delete[] ptel;
	}
	void getData() {
		cout << "이름: " << pname << ", 나이: " << age << ", 전화번호: " << ptel << endl;
	}
};

int main() {

	Human h("홍길동", 30, "010-1234-1234");
	h.getData();

	return 0;
}