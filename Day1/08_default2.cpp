#include <iostream>
#include <math.h>
using namespace std;
/*
	디폴트 매개변수를 여러 개 적용할 때는 맨 오른쪽부터 작성
*/
int coordinates(int x, int y = 0, int z = 0);		// default값을 선언(원형)에만 작성

int main() {

	cout << "(10, 20, 30): " << coordinates(10, 20, 30) <<endl;
	cout << "(10, 20, def): " << coordinates(10, 20) << endl;
	cout << "(10, def, def): " << coordinates(10) << endl;

	return 0;
}

int coordinates(int x, int y, int z) {

	int res;
	res = pow(x, 2) + pow(y, 2) + pow(z, 2); // pow -> 제곱

	return sqrt(res);						 // sqrt -> 제곱근
}