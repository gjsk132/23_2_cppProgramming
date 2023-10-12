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
		cout << "Cat 객체 기본 생성자" << endl;
	}
	Cat(const string& cname, int cage, int cweight, const string & croar) {
		/*int len = strlen(cname) + 1;
		name = new char[len];
		strcpy(name, cname);*/
		
		name = cname;
		age = cage;
		weight = cweight;
		roar = croar;
		cout << "Cat 객체 생성자" << endl;
	}
	~Cat() {
		cout << "Cat 객체 소멸자" << endl;
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
		cout << "나이 : " << age << endl;
		cout << "무게 : " << weight << endl;
		cout << "소리 : " << roar << endl;
	}
};

int main() {

	// 객체 배열 만들기
	/*Cat cat1[3] = { Cat("mio", 2, 2, "ma_a"), Cat("siro", 3, 1, "meow"), Cat("curo",1,1,"mak") };

	for (int i = 0; i < 3; i++) {

		cout << endl;
		cout << "<< " << cat1[i].getName() << " >>" << endl;
		cout << "나이 : " << cat1[i].getage() << endl;
		cout << "무게 : " << cat1[i].getweight() << endl;
		cout << "소리 : " << cat1[i].getRoar << endl;
	}*/

	Cat* cat[3];

	string myname;
	int myage;
	int myweight;
	string myroar;

	for (int i = 0; i < 3; i++) {

		cout << i+1 << "번째 고양이 이름은? : ";
		cin >> myname;
		cout << "나이는? : ";
		cin >> myage;
		cout << "몸무게는? : ";
		cin >> myweight;
		cout << "울음소리는? : ";
		cin >> myroar;
		cout << endl;

		cat[i] = new Cat(myname, myage, myweight, myroar);
	}

	for (int i = 0; i < 3; i++) {

		cat[i]->showCatInfo();
	}


	
	
	/*Cat* cat = new Cat("mio", 3, 5);
	cout << "<< " << cat->getName() << " >>" << endl;
	cout << "나이 : " << cat->getage() << endl;
	cout << "무게 : " << cat->getweight() << endl;

	cat->setName("happy");
	cat->setage(4);
	cat->setweight(3);

	cout << "<< " << cat->getName() << " >>" << endl;
	cout << "나이 : " << cat->getage() << endl;
	cout << "무게 : " << cat->getweight() << endl;*/

	//delete cat;
	
}