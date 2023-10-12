#include <iostream>
#include <cstring>
using namespace std;

// static -> ��ü�� ������ �� �ְԵ�
// static -> �����ϴ� ���� or �Լ� >> class �ٱ����� �ʱ�ȭ.
// static �Լ������� static ������ ����� �� ����.

class Person {
private:
	
	// public int -> private static int�� ����
	int money; // ���� ������ �� 
	static int sharedMoney; // ����
	
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

// static ���� ����. ���� ������ ����
int Person::sharedMoney = 10;  // 10���� �ʱ�ȭ

int main() {
	Person::addShared(50); // static ��� ����, ����=60
	Person::showSharedMoney();

	Person han;
	han.setMoney(100);
	han.setShardMoney(200); // static ��� ����, ����=200
	han.setShardMoney(300); // static ��� ����, ����=300
	han.addShared(100); // static ��� ����, ����=400

	cout << han.showMoney() << ' ';
	han.showSharedMoney();

	Person lee;
	lee.setMoney(200);
	lee.addShared(50); // static ��� ����, ����=400

	cout << lee.showMoney() << ' ';
	lee.showSharedMoney();

}
