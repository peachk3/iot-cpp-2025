#include <iostream>
using namespace std;
class MyClass {
private:
	int num;
public:
	void setNum(int n) { num = n; }
	void print() const{
		cout << "Before: " << num;
		// num++; -> const �޼����̱� ������ �� ���� �Ұ���
		const_cast<MyClass*>(this)->num--;
		// const�� �� �����ϰ� �����ͷ� ������ num �� -1 
		cout << " After: " << num << endl;
 	}
};
int main() {
	MyClass obj;
	obj.setNum(10);
	obj.print();

	return 0;
}