#include <iostream>
#include <string>
using namespace std;

class airplain {
private:
	string name;
	int customer;
	int speed;

public:
	airplain() {
		name = "Jeju Air 005";
		customer = 100;
		speed = 850;
	}
	airplain(string n, int c, int s) {
		name = n;
		customer = c;
		speed = s;
	}

	string getN() { return name; }
	int getC() { return customer; }
	int getS() { return speed; }

	void showAirplain();

};

void airplain::showAirplain() {
	cout << "����� �̸� : " << getN() << endl;
	cout << "�°� �� : " << getC() << "��" << endl;
	cout << "����� �ӵ� : " << getS() << "km/h" << endl << endl;
}


int main(void) {

	string name;
	int speed, customer;

	airplain Notset;
	Notset.showAirplain();

	cout << "Ÿ�� ���� ����� : ";
	getline(cin, name);
	cout << "Ż �� �ִ� �ο� : ";
	cin >> customer;
	cout << "����� �ӵ� : ";
	cin >> speed;
	cout << endl;

	airplain AirPlain(name, customer, speed);
	AirPlain.showAirplain();
	return 0;
}