#include <iostream>
/*
	�⺻ Ŭ������ �����ϴ� lvalue�� �Ļ��� Ŭ������ ���� ������ ��ȯ
	��Ӱ��迡�� �����ϰ� ����ȯ�� ����. ��ĳ���� �⺻ ����
	�ٿ�ĳ���� - �������� ���� virtual �޼��尡 �� �־�� ��
*/
class Super {
public:
	int n1, n2;
};
class Sub : public Super {
public:
	int n3, n4;
};
class Sub2 : public Sub {
public:
	int n5, n6;
};
int main() {
	Super* sp;
	Sub* sup;
	Sub2* sup2;
	Sub2 obj;			// ��ü ����
	
	sup2 = dynamic_cast<Sub2*>(&obj);
	sup = dynamic_cast<Sub*>(sup2);			// upcasting 
	sp = dynamic_cast<Super*>(sup2);		// sup2(�ڽ�)�� Super(�θ�)Ÿ���� �����ͷ� �ٲ� -> upcasting


	return 0;
}