#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	문자열 처리하기
*/

int main() {

	char str[20] = "홍길동";
	cout << str << endl;

	// 선언, 초기화 분리
	char str2[20];
	// str2 = "김영희";	-> 바로 입력 불가
	strcpy(str2, "김영희"); // 복사해서 str2에 넣어야 함
	cout << str2 << endl;

	//char* str3 = nullptr;
	char str3[100];
	cout << "이름 입력 > ";
	cin >> str3;
	cout << str3 << endl;

	const char* name;		// 포인터 이용해서 문자열 연결
	name = "김철수";
	cout << name << endl;

	return 0;
}