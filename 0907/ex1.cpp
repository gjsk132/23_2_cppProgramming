#include <iostream>

//using namespace�� ��� -> ����ȭ

using namespace std;
//using std::cout;
//using std::endl;


namespace a_school {
	void ft() {
		cout << "a_school ����" << endl;
	}
}

namespace b_school {
	void ft() {
		cout << "b_school ����" << endl;
	}
}


int main(void) {
	int a = 1;
	double b = 3.14;

	std::cout << "hello" << a << b << 56 << std::endl;

	//std��� namespace�� ���Ե� �Լ����� std ������ �����ϰ� ����� �� �ְ� ����.
	cout << "hello" << a << b << 56 << endl;


	//�ٸ� namespace������ ���� �̸��� �Լ� ���
	b_school::ft();


	return 0;
}