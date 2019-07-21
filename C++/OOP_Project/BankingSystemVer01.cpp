#include <iostream>

using namespace std;

struct Account
{
	int id;
	int money;
	char name[20];
};

Account AccArr[100];
int AccNum = 0;


void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);
void ShowMenu(void)
{
	cout << "------Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}

void MakeAccount(void)
{
	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> AccArr[AccNum].id;
	cout << "이 름: ";
	cin >> AccArr[AccNum].name;
	cout << "입금액: ";
	cin >> AccArr[AccNum].money;

	AccNum++;
}

void DepositMoney(void)
{
	int i, id, money;
	int num = -1;
	cout << "[입   금]" << endl;
	cout << "계좌ID: ";
	cin >> id;

	for (i = 0; i < AccNum; i++)
	{
		if (id == AccArr[i].id)
		{
			num = i;
			break;
		}
	}
	if (num == -1)
	{
		cout << "그런 사람 없습니다" << endl;
		return;
	}
	cout << "입금액: ";
	cin >> money;
	AccArr[num].money += money;
	cout << "입금완료" << endl;
}

void WithdrawMoney(void)
{
	int i, id, money;
	int num = -1;
	cout << "[출   금]" << endl;
	cout << "계좌ID: ";
	cin >> id;

	for (i = 0; i < AccNum; i++)
	{
		if (id == AccArr[i].id)
		{
			num = i;
			break;
		}
	}
	if (num == -1)
	{
		cout << "그런 사람 없습니다" << endl;
		return;
	}
	cout << "출금액: ";
	cin >> money;
	if (AccArr[num].money < money)
	{
		cout << "돈이 부족합니다" << endl;
		return;
	}
	AccArr[num].money -= money;
	cout << "출금완료" << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < AccNum; i++)
	{
		cout << "계좌ID: " << AccArr[i].id << endl;
		cout << "이 름: " << AccArr[i].name << endl;
		cout << "잔 액: " << AccArr[i].money << endl;
	}
}

int main(void)
{
	int num;

	while (true)
	{
		ShowMenu();
		cin >> num;
		cout << endl;
		switch (num)
		{
		case 1:
			MakeAccount();
			break;
		case 2:
			DepositMoney();
			break;
		case 3:
			WithdrawMoney();
			break;
		case 4:
			ShowAllAccInfo();
			break;
		case 5:
			return 0;
		default:
			cout << "잘못 입력하셨습니다" << endl;
		}
		cout << endl;
	}


	return 0;
}