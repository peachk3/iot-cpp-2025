#include <iostream>
using namespace std;

class CTime {
private:
	int m_hour{ 0 };	// 0으로 초기화하지 않으면 매개변수 없이 실행시 쓰레기값 출력됨
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "기본 생성자 호출" << endl; }					// default 생성자
	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)		// 콜론 초기화(이니셜라이져 리스트) - 헤드 부분에 작성(실행되기 전 초기화)
	{
		cout << "입력 3개 받는 생성자 호출" << endl;
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
		printf("현재 시간은 %d: %d: %d입니다.\n", m_hour, m_min, m_sec);
	}
};
int main() {

	//CTime now;
	CTime now = CTime();	// 임시객체를 now에 넣음
	now.showTime();

	//CTime t(15, 30, 30);
	//CTime t = { 12, 12, 12 };		// 중괄호 초기화 (복사하면서 객체가 생성되는 것)
	CTime t{ 10, 11, 12 };			// 초기화되면서 바로 생성
	t.showTime();

	return 0;
}