#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/*
	deep copy ���� ������
	�����Ҵ� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�
*/
class Person {
private:
	char* name;
	int age;
public:
	Person(const char* pname, int p_age) {
		printf("constructor call!\n");
		name = new char[strlen(pname) + 1];			// �����Ҵ�
		strcpy(name, pname);
		age = p_age;
	}
	Person(const Person& per) {
		printf("copy constructor!!\n");
		name = new char[strlen(per.name) + 1];				
		// ��������ڿ����� heap ���� �Ҵ� �޾Ƽ� ���� �����ؼ� ���� �־�� ��
		strncpy(this->name, per.name, strlen(per.name) + 1);
		this->age = per.age;
	}
	~Person() {	// �Ҹ���
		delete[] this->name;
	}
	void printPerson() {
		cout << "name: " << name << ", age: " << age << endl;
	}
};


int main() {

	Person p("�̼���", 50);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3(p);
	p3.printPerson();

	return 0;
};

/*
	����Ʈ�� �ڵ����� �����޴� ������: ����Ʈ ������, ���� ������, �Ҹ���
*/