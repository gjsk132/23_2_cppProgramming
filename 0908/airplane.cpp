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
	cout << "비행기 이름 : " << getN() << endl;
	cout << "승객 수 : " << getC() << "명" << endl;
	cout << "비행기 속도 : " << getS() << "km/h" << endl << endl;
}


int main(void) {

	string name;
	int speed, customer;

	airplain Notset;
	Notset.showAirplain();

	cout << "타고 싶은 비행기 : ";
	getline(cin, name);
	cout << "탈 수 있는 인원 : ";
	cin >> customer;
	cout << "비행기 속도 : ";
	cin >> speed;
	cout << endl;

	airplain AirPlain(name, customer, speed);
	AirPlain.showAirplain();
	return 0;
}