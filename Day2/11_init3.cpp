#include <iostream>
using namespace std;

class CTime {
private:
	int m_hour{ 0 };	// 0���� �ʱ�ȭ���� ������ �Ű����� ���� ����� �����Ⱚ ��µ�
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "�⺻ ������ ȣ��" << endl; }					// default ������
	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)		// �ݷ� �ʱ�ȭ(�̴ϼȶ����� ����Ʈ) - ��� �κп� �ۼ�(����Ǳ� �� �ʱ�ȭ)
	{
		cout << "�Է� 3�� �޴� ������ ȣ��" << endl;
		//m_hour = h;
		//m_min = m;
		//m_sec = s;
	}
	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const {
		printf("���� �ð��� %d: %d: %d�Դϴ�.\n", m_hour, m_min, m_sec);
	}
};
int main() {

	//CTime now;
	CTime now = CTime();	// �ӽð�ü�� now�� ����
	now.showTime();

	//CTime t(15, 30, 30);
	//CTime t = { 12, 12, 12 };		// �߰�ȣ �ʱ�ȭ (�����ϸ鼭 ��ü�� �����Ǵ� ��)
	CTime t{ 10, 11, 12 };			// �ʱ�ȭ�Ǹ鼭 �ٷ� ����
	t.showTime();

	return 0;
}