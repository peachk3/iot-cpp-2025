#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
const int NAME_LEN = 20;

void showMenu(void);		// �޴����
void makeAccount(void);		// ���°����� ���� �Լ�
void depositMoney(void);	// �Ա�
void withdrawMoney(void);	// ���
void showAllAccInfo(void);  // �ܾ���ȸ

enum {MAKE=1, DEPOSIT, WHITHDRAW, INQUIRE, EXIT};		// MAKE���� ���ʴ�� ���� �ο� (�ʱ�ȭ���� ������ 0������ �ο���)

class Account {
private:
	int accID;			// ���¹�ȣ
	int balance;		// ��    ��
	char* cusName;		// ���̸�
public:
	// ������ ����
	Account(int ID, int money, char* name) : accID(ID), balance(money) /* �ʱ�ȭ ����Ʈ : ������ ���ο��� ���� �ʱ�ȭ */ {
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}
	int getAccID() {				// ����ID ��������
		return accID; 
	}
	void deposit(int money) {		// �Ա��Լ�
		balance += money;
	}
	int withdraw(int money) {		// ����Լ�
		if (balance < money)		// �ܾ׺��� ��ݾ��� �� ũ�� 0 ��ȯ
			return 0;
		balance -= money;
		return money;
	}	
	void showAccInfo() {			// �������� ��ȸ �Լ�
		cout << "���� ID: " << accID << endl;
		cout << "��   ��: " << cusName << endl;
		cout << "��   ��: " << balance << endl;
	}
	~Account() {		// �Ҹ���
		delete[] cusName;			// ���� �Ҵ� ����
	}
};

Account* accArr[100];	// Account ������ ���� �迭
int accNum = 0;			// ����� ������ ��

int main() {
	int choice;

	while (1) {
		showMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			makeAccount();
			break;
		case DEPOSIT:
			depositMoney();
			break;
		case WHITHDRAW:
			withdrawMoney();
			break;
		case INQUIRE:
			showAllAccInfo();
			break;
		case EXIT:						// ���α׷��� ����� �� �������� ġ���
			for (int i = 0; i < accNum; i++) {
				delete accArr[i];
			}
			return 0;
		default:
			cout << "Illegal selection..." << endl;
		}
	}
	return 0;
}

// Menu ���� �Լ�
void showMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. ��    ��" << endl;
	cout << "3. ��    ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}
// ���� ���� �Լ�
void makeAccount(void) {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "��  ��: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> balance;
	cout << endl;
	
	accArr[accNum++] = new Account(id, balance, name);
}
// �Ա� �Լ�
void depositMoney(void) {
	int money;
	int id;
	cout << "[�Ա�]" << endl;
	cout << "����ID: "; 
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccID() == id) {
			accArr[i]->deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl << endl;
}
// ��� �Լ�
void withdrawMoney(void) {
	int money;
	int id;
	cout << "[���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "��ݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccID() == id) {			// ���� ID ��ȸ �� id�� ������ ���
			if (accArr[i]->withdraw(money) == 0){	// ��ݾ��� �ܾ׺��� �� Ŭ �� 0 return = �ܾ׺���
				cout << "�ܾ׺���" << endl << endl;
				return;
			}
			cout << "��ݿϷ�" << endl << endl;
		}
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl << endl; // accNum�� �Է¹��� ����ID�� ������
}
// ��ü ���� ���� Ȯ�� �Լ�
void showAllAccInfo(void) {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->showAccInfo();
		cout << endl;
	}
}