#include <iostream>
#include <cstring>
using namespace std;

//class -> ĸ��ȭ

class Test {
private:
	int num;
public:
	Test(int n) : num(n) {} //initializing? ���
	Test& Add(int n) {
		num += n;
		return *this;
	}
	void output() const { // �ش� �Լ� �ȿ��� num��(�ɹ�������) ��ȭ��Ű�� �ʴ´�.
		cout << "num : " << num << endl;
	}
	void show() {
		cout << num << endl;
	}
	void show() const { // const�� ������ ���� �Լ����� ������ �����ε��� ������.
		cout << "const �Լ� :" << num << endl;
	}
};

void overfunc(const Test& ob) {
	ob.show();
}

int main(void) {

	//(1)
	//const Test test(10);
	////test.Add(15);
	////const Test�� ���� �ɹ� ������ ���� -> ���� �Ұ���.
	//test.output();

	//Test test2(15);
	//test2.Add(20);
	//test2.output();

	const Test test1(10);
	Test test2(20);

	test1.show(); // test1�� const ��ü�̱� ������ show const�� ����
	test2.show(); // const �ƴ� ��ü -> �׳� show

	overfunc(test1); // test�� const ��ü�� ȣ�� -> test2�� const��ü
	overfunc(test2);

	return 0;
}