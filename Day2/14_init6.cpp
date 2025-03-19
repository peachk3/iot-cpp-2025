#include <iostream>
using namespace std;
/* ����ʱ�ȭ 3. ��ü�� ����� ������ ���*/
class Position {
private:
	int m_x;
	int m_y;			
public:
	Position(int x, int y) {			// 3. ��ü �����Ǹ鼭 ��µ�
		printf("Position ������!\n");		
		m_x = x, m_y = y; }
	void getData() {					// 7. getData() ����Ǹ鼭 ���
		cout << "x: " << m_x << ", y: " << m_y << endl;
	}
};

class ObjClass {
private:
	Position pos;					// ��ü ������� (��üȭ�� �̸� �Ǿ� �־�� ��!!)
public:
	ObjClass(int x, int y) : pos(x, y) /* 2. pos �����Ϸ� ��! */{	// 4. ObjClass �����Ǹ鼭 ��µ�
		printf("ObjClass constructor!\n ");
	}	
	
	void showValue() {				// 6. �Լ� ���� -> pos.getData()�� ��
		pos.getData();				// ���⼭ m_x, m_y ���� ��� �Ұ� -> getData()���� ����
	}
};
int main() {

	ObjClass o(3, 6);		// 1. ���� -> ObjClass�� ��
							// 2. pos �����Ϸ� ��! (Position ��ü ����)
	o.showValue();			// 5. o��ü�� �Լ� ����
							// 6. �Լ� ���� -> pos.getData()�� ��
							// 7. getData() ����Ǹ鼭 ���

	return 0;
}