#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
const int NAME_LEN = 20;

void showMenu(void);		// 메뉴출력
void makeAccount(void);		// 계좌개설을 위한 함수
void depositMoney(void);	// 입금
void withdrawMoney(void);	// 출금
void showAllAccInfo(void);  // 잔액조회

enum {MAKE=1, DEPOSIT, WHITHDRAW, INQUIRE, EXIT};		// MAKE부터 차례대로 순번 부여 (초기화하지 않으면 0번부터 부여됨)

class Account {
private:
	int accID;			// 계좌번호
	int balance;		// 잔    액
	char* cusName;		// 고객이름
public:
	// 생성자 선언
	Account(int ID, int money, char* name) : accID(ID), balance(money) /* 초기화 리스트 : 생성자 내부에서 값을 초기화 */ {
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}
	int getAccID() {				// 계좌ID 가져오기
		return accID; 
	}
	void deposit(int money) {		// 입금함수
		balance += money;
	}
	int withdraw(int money) {		// 출금함수
		if (balance < money)		// 잔액보다 출금액이 더 크면 0 반환
			return 0;
		balance -= money;
		return money;
	}	
	void showAccInfo() {			// 계좌정보 조회 함수
		cout << "계좌 ID: " << accID << endl;
		cout << "이   름: " << cusName << endl;
		cout << "잔   액: " << balance << endl;
	}
	~Account() {		// 소멸자
		delete[] cusName;			// 동적 할당 해제
	}
};

Account* accArr[100];	// Account 저장을 위한 배열
int accNum = 0;			// 저장된 계좌의 수

int main() {
	int choice;

	while (1) {
		showMenu();
		cout << "선택: ";
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
		case EXIT:						// 프로그램이 종료될 때 계좌정보 치우기
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

// Menu 선택 함수
void showMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입    금" << endl;
	cout << "3. 출    금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}
// 계좌 개설 함수
void makeAccount(void) {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "이  름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> balance;
	cout << endl;
	
	accArr[accNum++] = new Account(id, balance, name);
}
// 입금 함수
void depositMoney(void) {
	int money;
	int id;
	cout << "[입금]" << endl;
	cout << "계좌ID: "; 
	cin >> id;
	cout << "입금액: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccID() == id) {
			accArr[i]->deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl << endl;
}
// 출금 함수
void withdrawMoney(void) {
	int money;
	int id;
	cout << "[출금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "출금액: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccID() == id) {			// 계좌 ID 조회 시 id와 동일할 경우
			if (accArr[i]->withdraw(money) == 0){	// 출금액이 잔액보다 더 클 때 0 return = 잔액부족
				cout << "잔액부족" << endl << endl;
				return;
			}
			cout << "출금완료" << endl << endl;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl << endl; // accNum에 입력받은 계좌ID가 없을때
}
// 전체 계좌 정보 확인 함수
void showAllAccInfo(void) {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->showAccInfo();
		cout << endl;
	}
}