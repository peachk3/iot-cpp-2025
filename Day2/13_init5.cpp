#include <iostream>
/* ��� �ʱ�ȭ 2 ���۷��� */
class RefClass {
private:
	// ���۷���
	// typ3& ���������� = ������ ����ų ���� ����;
	int& ref;					// ���۷��� ���� ��ü�� �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �̷������ ��

public:
	RefClass(int& r) : ref(r) {}
	void showValue() {
		printf("res: %d\n", ref);
	}
};
int main() {

	int n = 50;
	RefClass obj2(n);
	obj2.showValue();

	return 0;
}