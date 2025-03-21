#include <iostream>
/*
	클래스 템플릿
*/
template <typename T>
class CTemplate {
private:
	T data;
public:
	CTemplate(T d) {data = d;}
	T getData() { return data; }
};
int main() {

	CTemplate<int> obj(100);
	printf("data: %d\n", obj.getData());

	CTemplate<std::string> obj2("classTemplate Test");
	std::cout << obj2.getData() << std::endl;

	return 0;
}