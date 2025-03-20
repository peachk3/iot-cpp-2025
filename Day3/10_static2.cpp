#include <iostream>

class AAA {
private:
	static int static_a;				// static ������� - ��ü���� ������� ����
	// static ��������� ���������� static ��� �Լ��� ���� �����ϴ� ���� ����
	int n;
public:
	AAA(int n);
	static void setStatic_a(int a);		// static ��� �Լ� - ������ �Լ� ����
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
	//n = 0;					// �Ϲ� ����� ������ ������ �ʴ´�. static ����� ���븸 ����
}
int main() {
	AAA ob1(10), ob2(20);
	ob1.print();
	ob2.print();

	ob1.setStatic_a(50);
	ob1.print();


	return 0;

}