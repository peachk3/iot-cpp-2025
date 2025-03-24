#include <iostream>
using namespace std;
/*
	virtual Class - ���� �����ڸ� ������ �޼��带 ���� ���� �Լ��� �ϸ�, �� ���� ���� �Լ��� ������ Ŭ����
*/
class Cinterface {
public:
	Cinterface() { cout << "CInterface constructor" << std::endl; }
	virtual void getData() const = 0;		// ���� ���� �Լ�
};
class CinSub : public Cinterface {
public:
	CinSub() { cout << "Cinsub constructor" << endl; }
	void getData() const override {
		cout << "Pure Virtual function()" << endl;
	}
};
int main() {

	// Cinterface obj;
	// �����߻�! �߻�Ŭ���� -> ���� ���� �Լ��� ������ �ֱ� ������ ��ü ���� �Ұ���

	CinSub obj;
	obj.getData();

	return 0;
}