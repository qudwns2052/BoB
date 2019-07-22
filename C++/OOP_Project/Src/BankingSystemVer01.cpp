#include <iostream>
#include <cstring>
using namespace std;

class Account
{
private:
	int id;
	int money;
	char* name;
public:
	Account(const Account& copy) : id(copy.id), money(copy.money)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	Account(int id, int money, const char* name) : id(id), money(money)
	{
		this->name = new char[strlen(name) - 1];
		strcpy(this->name, name);
	}
	
	int GetId() const
	{
		return id;
	}
	void Deposit(int money)
	{
		this->money += money;
	}
	int Withdraw(int money)
	{
		if (this->money < money)
			return 0;
		
		this->money -= money;
		return 1;
	}
	void ShowInfo() const
	{
		cout << "계좌ID: " << id << endl;
		cout << "이 름: " << name << endl;
		cout << "잔 액: " << money << endl;
	}

	~Account()
	{
		delete[] name;
	}
};

Account * AccArr[100];
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
	int id;
	char name[20];
	int money;
	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "이 름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> money;

	AccArr[AccNum++] = new Account(id, money, name);
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
		if (id == AccArr[i]->GetId())
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
	AccArr[num]->Deposit(money);

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
		if (id == AccArr[i]->GetId())
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
	if (AccArr[i]->Withdraw(money) == 0)
	{
		cout << "돈이 부족합니다" << endl;
		return;
	}
	cout << "출금완료" << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < AccNum; i++)
	{
		AccArr[i]->ShowInfo();
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