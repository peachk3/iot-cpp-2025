#include <iostream>
/*
	��� ���迡�� ��ü ���� �� �Ҹ�
*/
class SuperClass {
private:
	int num;
public:
	SuperClass(int anum) {				// ����
		num = anum;
		std::cout << num << " SuperClass constructor" << std::endl;
	}
	~SuperClass(){						// �Ҹ�
		std::cout << num << " SuperClass Destructor" << std::endl;
	}
};
class SubClass : public SuperClass {
private:
	int subNum;
public:
	SubClass(int an, int an2) : SuperClass(an) {
		subNum = an2;
		std::cout << subNum << " SubClass constructor" << std::endl;
	}
	~SubClass() {
		std::cout << subNum << " SubClass Desturctor" << std::endl;
};
int main() {
	SuperClass s{ 1 };
	std::cout << "---------------------------------" << std::endl;
	SubClass sub{ 2, 22 };

	return 0;
}
/*
	��ü�� ������ �� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ���
	��, �������� ȣ��� �������� ������ �ٸ���.
	
	����Ŭ���� ȣ�� -> ����Ŭ���� ���� -> ����Ŭ���� ���� -> ����Ŭ���� �Ҹ� -> ����Ŭ���� �Ҹ� 
*/