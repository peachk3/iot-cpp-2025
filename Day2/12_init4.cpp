#include <iostream>
/* ����ʱ�ȭ 1 ��� */

class ConstClass {
private:
	int m_value;
	const int m_value2;		// ��� - ����(��ü �����Ǳ� ��)�� ���ÿ� �ʱ�ȭ������� ��, �� ���Ŀ��� ���� �Ұ� ==> �ݷ� �ʱ�ȭ ���
	//
public:
	ConstClass(int value, int value2) : m_value2(value2) /* ����� ���ÿ� �ʱ�ȭ���Ѿ� �� */{m_value = value; }
	void showValue() {
		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
	}
};

int main() {

	ConstClass obj(10, 20);
	obj.showValue();

	return 0;
}