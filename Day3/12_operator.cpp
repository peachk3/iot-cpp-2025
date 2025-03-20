#include <iostream>
/*
	연산자 오버로딩(다중정의)
*/
class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		printf("constructor call!!\n");
	}

	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}

	Point add(const Point& p) {				// 객체 Point타입의 출력이 있음 (객체를 보낼때는 &(참조)로 받아야 함)
		printf("add() call!!\n");
		return Point(x + p.x, y + p.y);		
	}
};

int main() {

	Point obj(10, 20);
	obj.showPoint();

	Point obj2(30, 40);
	obj2.showPoint();

	Point obj3;
	obj3 = obj.add(obj2);
	obj3.showPoint();

	return 0;
}