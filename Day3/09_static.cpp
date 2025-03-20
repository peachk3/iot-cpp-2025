#include <iostream>
/*
	static - 클래스 멤버다. (this 포인터가 없다), 객체들이 공유한다.
	객체 멤버 / 클래스 멤버 다른점
*/
class StaticTest {
public:
	int n;
	static int static_n;				// static 멤버 변수
	StaticTest();
	void print();
};
int StaticTest::static_n = 10;			// static 멤버변수 초기화는 클래스 외부에서 이루어져야 한다.
StaticTest::StaticTest() {
	n = 20;
	//static_n = 10;
}
void StaticTest::print() {
	std::cout << "Stiatic_n: " << static_n << ", n: " << n << std::endl;
}
int main() {
	
	StaticTest ob1, ob2;
	ob1.print();
	ob2.print();

	ob2.static_n = 1000;
	ob2.n = 50;
	// static_n 은 1000으로 동일하고 n은 다르게 추력됨
	ob2.print();
	ob1.print();


	return 0;
}