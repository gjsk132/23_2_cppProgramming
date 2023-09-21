#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;

class Cat {
private:
	char* name;
	int age;
	int weight;
public:
	Cat() {
		int len = strlen(name) + 1;
		name = new char[len];
		strcpy(name, "");
		age = 0;
		weight = 0;
		cout << "Cat 객체 기본 생성자" << endl;
	}
	Cat(const char* cname, int cage, int cweight) {
		int len = strlen(cname) + 1;
		name = new char[len];
		strcpy(name, cname);
		age = cage;
		weight = cweight;
		cout << "Cat 객체 생성자" << endl;
	}
	~Cat() {
		cout << "Cat 객체 소멸자" << endl;
		delete name;
	}
	char* getName() { return name; }
	void setName(const char* cname) {
		name = new char[20];
		strcpy(name, cname);
	}
	int getage() { return age; }
	void setage(int cage) { age = cage; }

	int getweight() { return weight; }
	void setweight(int cweight) { weight = cweight; }
};

int main() {
	
	Cat* cat = new Cat("mio", 3, 5);
	cout << "<< " << cat->getName() << " >>" << endl;
	cout << "나이 : " << cat->getage() << endl;
	cout << "무게 : " << cat->getweight() << endl;

	cat->setName("happy");
	cat->setage(4);
	cat->setweight(3);

	cout << "<< " << cat->getName() << " >>" << endl;
	cout << "나이 : " << cat->getage() << endl;
	cout << "무게 : " << cat->getweight() << endl;

	delete cat;
	
}