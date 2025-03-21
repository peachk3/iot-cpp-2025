#include <iostream>
/*
	Àü¿ªÇÔ¼ö ¿À¹ö·Îµù : operator(p1, p2)
	1. public
*/
class Point {
public:
	int x, y;	// ¸â¹ö°¡ public
	Point (int ax, int ay) : x(ax), y(ay){}
	Point operator+(const Point& other) {				// °´Ã¼ + °´Ã¼
		return Point(x + other.x, y + other.y);
	}	
	Point operator+(int n) {							// °´Ã¼ + Á¤¼ö
		return Point(x + n, y + n);
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};
inline Point operator+(int n, const Point& other) {
	return Point(n + other.x, n + other.y);
}
int main() {

	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	c.showPoint();
	Point d = a + 100;
	d.showPoint();
	Point e = 200 + b;
	e.showPoint();

	return 0;
}