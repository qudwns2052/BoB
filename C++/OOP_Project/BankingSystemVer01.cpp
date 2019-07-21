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
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "����: ";
}

void MakeAccount(void)
{
	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> AccArr[AccNum].id;
	cout << "�� ��: ";
	cin >> AccArr[AccNum].name;
	cout << "�Աݾ�: ";
	cin >> AccArr[AccNum].money;

	AccNum++;
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
		if (id == AccArr[i].id)
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
	AccArr[num].money += money;
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
		if (id == AccArr[i].id)
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
	if (AccArr[num].money < money)
	{
		cout << "���� �����մϴ�" << endl;
		return;
	}
	AccArr[num].money -= money;
	cout << "��ݿϷ�" << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < AccNum; i++)
	{
		cout << "����ID: " << AccArr[i].id << endl;
		cout << "�� ��: " << AccArr[i].name << endl;
		cout << "�� ��: " << AccArr[i].money << endl;
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