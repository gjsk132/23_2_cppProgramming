#include <iostream>
using namespace std;

class Seller {
private:
	int itemCnt;
	int itemPrice;
	int Mymoney;
public:
	void Init(int cnt, int price, int money){
		itemCnt = cnt;
		itemPrice = price;
		Mymoney = money;
	}
	
	int Saleitems(int money) { //물건 판매
		int num = money / itemPrice;
		Mymoney += money;
		itemCnt -= num;
		return num;
	}

	void showResult() {
		cout << "Seller's money: " << Mymoney << endl;
		cout << "Seller's item: " << itemCnt << endl;
	}

};

class Buyer {
private:
	int itemCnt;
	int Mymoney;
public:
	void Init(int Cnt, int money) {
		itemCnt = Cnt;
		Mymoney = money;
	}
	void Buyitems(Seller &S, int money) { //물건 구매
		itemCnt += S.Saleitems(money);
		Mymoney -= money;
	}
	void showResult() {
		cout << "Buyer's money: " << Mymoney << endl;
		cout << "Buyer's item: " << itemCnt << endl;
	}
};

int main() {
	Seller seller;
	Buyer buyer;
	seller.Init(540, 10, 0);
	buyer.Init(0, 2000);
	
	int giveMoney;
	cout << "지불금액 : ";
	cin >> giveMoney;

	buyer.Buyitems(seller, giveMoney);
	buyer.showResult();
	seller.showResult();

	return 0;
}