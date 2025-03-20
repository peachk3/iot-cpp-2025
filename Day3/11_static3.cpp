#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	StaticTest라는 클래스 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
	3개 입력 받는 생성자를 만들기 회원번호는 자동으로 증가시킬 것임
	출력 담당의 showmember() 메서드 구현하시오
*/

class StaticTest {
private:
	static int static_cnt;
	char name[20];
	char tel[20];
	char addr[100];
public:
	StaticTest(const char* name, const char* tel, const char* addr);
	static void setStatic_cnt(int cnt);
	void showmember();
};

int StaticTest::static_cnt = 0;

StaticTest::StaticTest(const char* _name, const char* _tel, const char* _addr) {
	strcpy(name, _name);
	strcpy(tel, _tel);
	strcpy(addr, _addr);

	static_cnt++;
}

void StaticTest::setStatic_cnt(int cnt) {
	static_cnt = 0;
}

void StaticTest::showmember() {
	std::cout << "회원번호: " << static_cnt << std::endl;

	printf("이름: %s, 전화번호: %s, 주소: %s\n", name, tel, addr);
}

int main() {

	StaticTest m1("홍길동", "010-1234-1234", "부산");
	m1.showmember();
	StaticTest m2("김철수", "010-1111-1111", "서울");
	m2.showmember();
	StaticTest m3("김영희", "010-9876-5432", "대전");
	m3.showmember();
	StaticTest m4("이순신", "010-1234-5678", "부산");
	m4.showmember();

	return 0;
}