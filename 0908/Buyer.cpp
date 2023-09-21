#include <iostream>
using namespace std;

class Buyer {
private:
	int itemCnt;
	int Mymoney;
public:

	Buyer(int item, int money) {
		itemCnt = item;
		Mymoney = money;
	}
	~Buyer() {
		cout << "Buyer ��ü �Ҹ�" << endl;
	}

	void Init(int Cnt, int money) {
		itemCnt = Cnt;
		Mymoney = money;
	}
	void Buyitems(Seller& S, int money) { //���� ����
		itemCnt += S.Saleitems(money);
		Mymoney -= money;
	}
	void showResult() {
		cout << "Buyer's money: " << Mymoney << endl;
		cout << "Buyer's item: " << itemCnt << endl;
	}
};