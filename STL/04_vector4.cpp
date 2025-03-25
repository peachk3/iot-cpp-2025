#include <iostream>
#include <vector>
#include <list>
using namespace std;
/*
	vector container - ����, ����, ����
*/
int main() {
	vector<string> v;
	list<int> li;

	v.push_back("tiger");
	v.push_back("lion");
	v.push_back("elephant");
	v.push_back("horse");

	cout << "v.front(): " << v.front() << endl;
	cout << "v.back(): " << v.back() << endl;
	cout << "v.capacity(): " << v.capacity() << endl;
	cout << endl;

	vector<string>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "/ ";
	}
	cout << endl;

	v.pop_back();	// horse ������
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "/ ";
	}
	cout << endl;

	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter == "elephant") {
			v.erase(iter); break;
		}
		cout << *iter << "/ ";
	}

	cout << endl;
	return 0;
}
/*
	iterator Ÿ�� : iterator, begin(), end()
*/