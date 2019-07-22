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
		cout << "����ID: " << id << endl;
		cout << "�� ��: " << name << endl;
		cout << "�� ��: " << money << endl;
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
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "����: ";
}

void MakeAccount(void)
{
	int id;
	char name[20];
	int money;
	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�� ��: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> money;

	AccArr[AccNum++] = new Account(id, money, name);
}

void DepositMoney(void)
{
	int i, id, money;
	int num = -1;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";
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
		cout << "�׷� ��� �����ϴ�" << endl;
		return;
	}

	cout << "�Աݾ�: ";
	cin >> money;
	AccArr[num]->Deposit(money);

	cout << "�ԱݿϷ�" << endl;
}

void WithdrawMoney(void)
{
	int i, id, money;
	int num = -1;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";
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
		cout << "�׷� ��� �����ϴ�" << endl;
		return;
	}
	cout << "��ݾ�: ";
	cin >> money;
	if (AccArr[i]->Withdraw(money) == 0)
	{
		cout << "���� �����մϴ�" << endl;
		return;
	}
	cout << "��ݿϷ�" << endl;
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
			cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
		}
		cout << endl;
	}


	return 0;
}