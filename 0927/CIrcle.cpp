#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;

class Cat {
private:
	string name;
	int age;
	int weight;
	string roar;
public:
	Cat() {
		name = "hwanta";
		age = 1;
		weight = 2;
		cout << "Cat ��ü �⺻ ������" << endl;
	}
	Cat(const string& cname, int cage, int cweight, const string & croar) {
		/*int len = strlen(cname) + 1;
		name = new char[len];
		strcpy(name, cname);*/
		
		name = cname;
		age = cage;
		weight = cweight;
		roar = croar;
		cout << "Cat ��ü ������" << endl;
	}
	~Cat() {
		cout << "Cat ��ü �Ҹ���" << endl;
		//delete name;
	}

	//string getName() { return name; }
	//void setName(const string& cname) {
	//	//name = new char[20];
	//	//strcpy(name, cname);
	//	name = cname;
	//}
	//int getage() { return age; }
	//void setage(int cage) { age = cage; }

	//int getweight() { return weight; }
	//void setweight(int cweight) { weight = cweight; }

	//string getRoar() { return roar; }
	//void setRoar(const string& croar) {
	//	//name = new char[20];
	//	//strcpy(name, cname);
	//	roar = croar;
	//}

	void setCat(const string& cname, int cage, int cweight, const string& croar) {
		name = cname;
		age = cage;
		weight = cweight;
		roar = croar;
	}
	void showCatInfo() {
		cout << "<< " << name << " >>" << endl;
		cout << "���� : " << age << endl;
		cout << "���� : " << weight << endl;
		cout << "�Ҹ� : " << roar << endl;
	}
};

int main() {

	// ��ü �迭 �����
	/*Cat cat1[3] = { Cat("mio", 2, 2, "ma_a"), Cat("siro", 3, 1, "meow"), Cat("curo",1,1,"mak") };

	for (int i = 0; i < 3; i++) {

		cout << endl;
		cout << "<< " << cat1[i].getName() << " >>" << endl;
		cout << "���� : " << cat1[i].getage() << endl;
		cout << "���� : " << cat1[i].getweight() << endl;
		cout << "�Ҹ� : " << cat1[i].getRoar << endl;
	}*/

	Cat* cat[3];

	string myname;
	int myage;
	int myweight;
	string myroar;

	for (int i = 0; i < 3; i++) {

		cout << i+1 << "��° ����� �̸���? : ";
		cin >> myname;
		cout << "���̴�? : ";
		cin >> myage;
		cout << "�����Դ�? : ";
		cin >> myweight;
		cout << "�����Ҹ���? : ";
		cin >> myroar;
		cout << endl;

		cat[i] = new Cat(myname, myage, myweight, myroar);
	}

	for (int i = 0; i < 3; i++) {

		cat[i]->showCatInfo();
	}


	
	
	/*Cat* cat = new Cat("mio", 3, 5);
	cout << "<< " << cat->getName() << " >>" << endl;
	cout << "���� : " << cat->getage() << endl;
	cout << "���� : " << cat->getweight() << endl;

	cat->setName("happy");
	cat->setage(4);
	cat->setweight(3);

	cout << "<< " << cat->getName() << " >>" << endl;
	cout << "���� : " << cat->getage() << endl;
	cout << "���� : " << cat->getweight() << endl;*/

	//delete cat;
	
}