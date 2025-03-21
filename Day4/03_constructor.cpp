#include <iostream>
/*
	��ü�� ���ϴ� �Լ�: add()
	������ return 
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
	// ������ ����
	Point& add(const Point& other) {
		printf("add()\n");
		//return Point(x + other.x, y + other.y);
		/* ������ ���� */
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
	p3 = p.add(p2);			// constructor�� 3�� ��µ�
	*/
	Point p3 = p.add(p2);	// ����
	p3.printPoint();		// constructor�� 2�� ��µǰ� copy constructor�� �� �� ��µ�

	return 0;
}