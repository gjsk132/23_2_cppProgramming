#include <iostream>
#include <cstring>
using namespace std;

// static -> 객체가 공유할 수 있게됨
// static -> 공유하는 변수 or 함수 >> class 바깥에서 초기화.
// static 함수에서는 static 변수만 사용할 수 있음.

class Person {
private:
	
	// public int -> private static int로 변경
	int money; // 개인 소유의 돈 
	static int sharedMoney; // 공금
	
public:
	void addMoney(int money) {
		this->money += money;
	}

	static void addShared(int n) {
		sharedMoney += n;
	}

	static void showSharedMoney() {
		cout << sharedMoney << endl;
	}
	static void setShardMoney(int sm) {
		sharedMoney = sm;
	}

	void setMoney(int n) {
		money = n;
	}
	int showMoney() {
		return money;
	}

};

// static 변수 생성. 전역 공간에 생성
int Person::sharedMoney = 10;  // 10으로 초기화

int main() {
	Person::addShared(50); // static 멤버 접근, 공금=60
	Person::showSharedMoney();

	Person han;
	han.setMoney(100);
	han.setShardMoney(200); // static 멤버 접근, 공금=200
	han.setShardMoney(300); // static 멤버 접근, 공금=300
	han.addShared(100); // static 멤버 접근, 공금=400

	cout << han.showMoney() << ' ';
	han.showSharedMoney();

	Person lee;
	lee.setMoney(200);
	lee.addShared(50); // static 멤버 접근, 공금=400

	cout << lee.showMoney() << ' ';
	lee.showSharedMoney();

}
