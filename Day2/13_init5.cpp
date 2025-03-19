#include <iostream>
/* 멤버 초기화 2 레퍼런스 */
class RefClass {
private:
	// 레퍼런스
	// typ3& 참조변수명 = 참조가 가리킬 기존 변수;
	int& ref;					// 레퍼런스 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 함

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