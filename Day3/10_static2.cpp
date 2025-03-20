#include <iostream>

class AAA {
private:
	static int static_a;				// static 멤버변수 - 객체별로 멤버변수 가짐
	// static 멤버변수를 가져오려면 static 멤버 함수를 통해 접근하는 것이 좋다
	int n;
public:
	AAA(int n);
	static void setStatic_a(int a);		// static 멤버 함수 - 기존의 함수 공유
	void print();
};
int AAA::static_a = 100;
AAA::AAA(int n) {
	this->n = n;
}
void AAA::print() {
	printf("static_a: %d, n: %d\n", static_a, n);
}
void AAA::setStatic_a(int a) {
	static_a = 500;
	//n = 0;					// 일반 멤버의 접근은 허용되지 않는다. static 멤버읫 ㅏ용만 가능
}
int main() {
	AAA ob1(10), ob2(20);
	ob1.print();
	ob2.print();

	ob1.setStatic_a(50);
	ob1.print();


	return 0;

}