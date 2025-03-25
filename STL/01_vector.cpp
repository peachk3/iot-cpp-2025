#include <iostream>
#include <vector>		// vetor ������� ����
using namespace std;
/*
	Vector
*/
int main() {

	/*std::*/vector<int> v;		// �� ���� ��ü ����
	vector<int> v1{ 10 };		// ���� 10�� ���� ���� ����
	vector<int> v2(5);			// ���� 0���� �ʱ�ȭ�� ũ�� 5�� ���� ����
	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };	// ���� 6���� ���� ���� ����

	cout << "arr size: " << v.size() << endl;	// 0
	cout << "v1 size: " << v1.size() << endl;	// 1
	cout << "v2 size: " << v2.size() << endl;	// 5
	cout << "v3 size: " << v3.size() << endl;	// 6

	for (int i = 0; i < 5; i++) {
		printf("v2[%d]: %d   ", i, v2[i]);		// ���� ���� �� ��� (�⺻�� 0���� �ʱ�ȭ)
	}
	cout << endl;
	for (auto i : v3) {					// ������� for�� -> �ε��� ��� �Ұ�!
		//cout << v3[i] << endl;

		cout << i << endl;
	}
	/* begin()�� end()�� iterator(�ݺ���) Ÿ���� ��ȯ(������ó�� ����) */
	cout << "v3�� ù��° ��Ұ�: " << *v3.begin() << endl;		// * ��������
	cout << "v3�� ������ ��Ұ�: " << *(v3.end() - 1) << endl;	// -1 !!




	return 0;
}
/*
	vector.size() : ���� ũ��(����)�� ��ȯ
	vector.begin() : ������ ù ��° ���Ҹ� ����Ű�� �ݺ��� ��ȯ
	vector.end() : ������ ���� ����Ű�� �ݺ��� ��ȯ
*/