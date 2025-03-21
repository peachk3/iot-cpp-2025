#include <iostream>
/*
	객체를 더하는 함수: add()
	참조를 return 
*/
class Point {
public:
	int x, y;
	Point(int ax, int ay) : x(ax), y(ay) {
		printf("constructor\n");
	}
	Point(const Point& other) {
		printf("copy constructor\n");
		x = other.x;
		y = other.y;
	}
	// 참조로 리턴
	Point& add(const Point& other) {
		printf("add()\n");
		//return Point(x + other.x, y + other.y);
		/* 참조로 리턴 */
		x = other.x;
		y = other.y;
		return *this;
	}
	void printPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};
int main() {
	Point p(10, 20);
	Point p2(30, 40);
	std::cout << "-------------------------------------------" << std::endl;
	/*
	Point p3;
	p3 = p.add(p2);			// constructor가 3번 출력됨
	*/
	Point p3 = p.add(p2);	// 참조
	p3.printPoint();		// constructor가 2번 출력되고 copy constructor가 한 번 출력됨

	return 0;
}