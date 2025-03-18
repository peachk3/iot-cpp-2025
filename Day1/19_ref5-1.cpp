#include <iostream>
/*
	출력인 경우 : 일반 변수
*/
int func(int anum) {

	anum++;
	return anum;	
}

int main() {

	int num = 10;
	//int& res = func(num);
	// -> 에러 발생 => 변경 가능한 참조로 쓰려고 해서! (안전하지 않음)
	const int& res = func(num);
	// func(num) - 값을 반환하는 함수 / 반환값 - 임시값
	// 임시 값은 메모리에 잠깐 존재하고 함수가 끝나면 사라짐
	// 참조(&)를 사용하면 임시 값은 안전하지 않음! => 임시 값은 금방 사라지기 때문
	// const - 읽기 전용 참조이기 때문에 안전하게 참조 가능

	std::cout << res << std::endl;

	return 0;
}