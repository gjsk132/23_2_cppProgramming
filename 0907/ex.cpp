//0907_contents
//cout : print�� ���� ����ϴ� �ڵ�
//cin : scanf�� ���� �Է¹޴� �ڵ�
//namespace : 


#include <iostream>

//���ڿ��� ���õ� ����
#include <cstring>
#include <string>

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


	//example 2-3
	cout << endl << "example 2-3" << endl;
	cout << "�ʺ� �Է��ϼ���>>";

	int width;
	cin >> width;

	cout << "���̸� �Է��ϼ���>>";

	int height;
	cin >> height;

	int area = width * height;
	cout << "������ " << area << "\n";
}