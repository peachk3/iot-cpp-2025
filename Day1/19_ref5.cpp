#include <iostream>
/*
	출력인 경우 : 일반 변수
*/
int func(int anum) {

	anum++;
	return anum;	// 임시 객체, rvalue (상수)
	// 별칭으로 전달함!
	// 지역 -> 함수 이후 사라짐
}

int main() {

	int num = 10;
	//int& res = func(num);				
	// 오류 발생! -> rvalue (임시 객체)는 lvaule(일반 변수)와 달리 일시적인 메모리 공간에 존재
	// => 유효하지 않음!! - func(num)이 종료된 후 바로 메모리에서 사라지기 때문!!!!
	const int& res = func(num);
	// 임시 객체 -> 임시 공간의 메모리 공간 할당 => 참조되는 이름 붙이기 

	std::cout << res << std::endl;

	return 0;
}