#include <iostream>
/*
	��ü ���� ����
*/
class AClass {
public:
	void showAClass () {
		std::cout << "Dynamically created object" << std::endl;
	}

};
int main() {

	AClass* ptr = new AClass{};				// ��ü ���� �Ҵ�
	ptr->showAClass();
	
	delete ptr;								// ���� �޸� ����

	return 0;
}