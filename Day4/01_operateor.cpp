#include <iostream>

class MyClass {
private:
	int m_a, m_b;
	const char* m_name;
public:
	// �����ڿ��� �⺻�� ����
	MyClass(int a = 0, int b = 0) : m_a(a), m_b(b) /*, m_name(name) */ {
		//m_a = a;
		//m_b = b;
		//strcpy(m_name, name);
	}

	// ��ü�� ���� ���
	void showMyClass(){
		std::cout << m_a << ", " << m_b << ", " << /*m_name << */std::endl;
	}

};
int main() {

	//MyClass obj{ 1, 2, "ȫ�浿" };
	//obj.showMyClass();

	//MyClass obj2;	
	//obj2 = obj;						// num = 10;, ����Ʈ ���� ������ (������ �����ε�)
	//// ��ü�� ������ ���� ���� ��Ȳ���� ��ü�� �����ؼ� ���
	//// -> �����ε��� �Ǳ� ������ ������
	//obj2.showMyClass();
	
	// MyClass ��ü ����, a, b ���� �����ϰ� ������ ȣ��
	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };

	//MyClass obj3 = obj + obj2;
	// Ŭ������ ���� + �����ڴ� �⺻������ �������� ����
	// => ������ �����ε��� ���� �� ��ü�� ���� �� ����


	return 0;
}