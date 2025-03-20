#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) { printf("constructor \n"); }
	Point(const Point& p) {
		printf("���������!\n");
		this->x = p.x;
		this->y = p.y;
	}
	const Point& add(const Point& p) {		// ����� ������ �ִ� ����
		printf("add()! \n");
		return Point(x + p.x, y + p.y);		// �ӽ� ��ü�� ������
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};
int main() {

	Point obj(10, 20);
	obj.showPoint();

	Point obj2(obj);
	obj2.showPoint();

	Point obj3;
	obj3 = obj.add(obj2);
	obj3.showPoint();

	return 0;
}