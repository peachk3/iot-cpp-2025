#include <iostream>
using namespace std;

class AClass {
private:
	int n1;
	int n2;

// -> public�� �ִ� �޼��带 ���ؼ� �����ؾ� ��!

public:
	// AClass() {}			// default ������
	void setData(int num1, int num2) {
		n1 = num1;
		n2 = num2;
	}
	void getData() {
		cout << "A Ŭ������ obj�Դϴ�." << endl;
		cout << "n1: " << n1 << ", n2: " << n2 << endl;
	}
};

int main() {

	AClass obj;				// AClass obj(); -> ��ü ������(������ ȣ���) // default �����ڰ� ������
	// AClass obj(100, 200); 
	// -> ���� �߻� (2���� ���� �޴� �����ڰ� ���� ����)

	obj.setData(10, 20);
	obj.getData();

	return 0;
}