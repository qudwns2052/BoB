#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};

	void ShowWhereInfo(int where)
	{
		switch (where)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "매니저" << endl;
			break;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* company;
	char* phone;
	int where;

public:
	
	NameCard(const char* myname, const char* mycompany, const char* myphone, int mywhere)
		: where(mywhere)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);


		company = new char[strlen(mycompany) + 1];
		strcpy(company, mycompany);


		phone = new char[strlen(myphone) + 1];
		strcpy(phone, myphone);
	}

	void ShowNameCardInfo(void)
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << phone << endl;
		cout << "직급: ";
		COMP_POS::ShowWhereInfo(where);
		cout << endl;
	}
	
	~NameCard()
	{
		delete[]name;
		delete[]phone;
		delete[]company;
		cout << "~NameCard()" << endl;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}

