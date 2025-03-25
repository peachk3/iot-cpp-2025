#include <iostream>
/*
	��ȯ ���� : �� ��ü�� ���θ� �����ϰ�, �� �� shared_ptr�� ����Ͽ� ������ �����ϴ� ��쿡 �߻�
*/
struct B;
struct A {
	std::shared_ptr <B> b_ptr;
};
struct B {
	//std::shared_ptr<A> a_ptr;
	std::weak_ptr<A> a_ptr;		// ��ȯ������ ������
};
int main() {

	std::shared_ptr<A> a(new A());
	std::shared_ptr<B> b(new B());

	// ��ȯ ���� ( b->a , a->b �����ϰ� ����)
	a->b_ptr = b;
	b->a_ptr = a;

	return 0;
}