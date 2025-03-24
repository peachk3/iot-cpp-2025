#include <iostream>
class MyClass {
public:
	int value;	// Ŭ���� ��� ����, �� �����
	
	//MyClass() {};
	MyClass(int v = 0) : value(v) {}	// �ݷ� �ʱ�ȭ
	void showMyClass() {
		std::cout << "value: " << value << std::endl;
	}
};
int main() {
	
	// �������� MyClass ��ü�� �����ϰ�, value 10���� �ʱ�ȭ
	MyClass* ptr = new MyClass{ 10 };
	// ��ü�� ��� �Լ� ȣ�� : value ���
	ptr->showMyClass();
	printf("value: %d\n", ptr->value);

	// �������� �Ҵ��� ��ü�� �޸𸮿��� ����
	delete ptr;

	MyClass obj{};		// 0�̶�� �ʱⰪ �����鼭 obj ������
	// obj ��ü�� �ּҸ� ptr�� ����
	ptr = &obj;			
		
	// ptr�� ����ؼ� ��ü�� ��� �Լ� ȣ��
	ptr->showMyClass();		// ��ü ptr�� ����Ű�� �ּҿ��� showMyClass ȣ��
	(*ptr).showMyClass();   // �����͸� �������Ͽ� showMyClass ȣ��

	printf("value: %d\n", ptr->value);

	return 0;
}