#include <iostream>
using namespace std;

class A {
public:
	int m_num = 0;				// �������(�Ӽ�)

	void set(int num) {
		m_num = num;
	}
	void print() {			// ����Լ�(���), �޼���
		cout << "���� A Ŭ������ �ν��Ͻ��Դϴ�.  " << "num: " << m_num << endl;
	}
};

int main() {

	A obj;		// class(type) Ŭ���� A Ÿ���� ��ü obj ����!!		��ü�� �����Ǳ� ���ؼ��� �����ڰ� ȣ��Ǿ�� ��
				// ȣ������ ������ �������� ����
				// obj�� Ŭ���� A�� �ν��Ͻ� (��ü = �ν��Ͻ�) 
	
	obj.print(); // ��ü ���ؼ� �Լ� ����
	obj.set(10);
	obj.print();
	// class�� private �� ��� 3���� ��� ���� �Ұ�
				
	// int n;
	return 0;
}