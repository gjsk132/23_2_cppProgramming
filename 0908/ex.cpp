#include <iostream>

using namespace std;

class Circle { // Ŭ���� ���� ��, ����
public: // public Ŭ���� ���ο����� �ܺο����� ������ �� ����.
	int radius; // �ɹ� ����
	double getArea(); // �ɹ� �Լ�
	/*{ Ŭ���� ���ο����� ���� ����������, Ŭ���� �� ������ �������� ���� ���� �ϰ� Ŭ���� �ܺο��� ����
		return 3.14 * radius * radius;
	}*/

	// �Լ� �����ε� : �Ű������� �ִ� ���� ���� ��� ���� ���� ���ÿ� �� �� ����. (������ �ߺ� ����)
	// ���� Ÿ���� ���� / ��ü�� ����� �� �� �� ���ȴ�. // ���� : ��ü ���� �ʱ�ȭ
	Circle(); //�⺻������ �ٷ� ������ ��� 
	Circle(int r); // �Ű������� �ִ� ���

};

//:: -> �������� ������

//Ŭ���� �ܺο��� Ŭ���� ���ο� �ִ� �Լ��� ������ ��, �ش� �Լ��� ��� ���� �ִ��� �˷�����Ѵ�.
double Circle::getArea() { // ���� ���� �ɹ� �Լ��� ����. ��? -> Ŭ���� �ȿ� ������ �ʹ� ���������� ��츦 ����
	return 3, 14 * radius * radius;
}

Circle::Circle() { // ���� �ƹ��͵� ���� ��, �⺻������ 1�� �����ǵ��� �Ǿ� ����
	radius = 1;
}

Circle::Circle(int r) { // ���� �Ű������� ���� ������, �ش� ���� ����� �ʱⰪ�� ����
	radius = r;
}



class Rectangle {
private:
	int width;
	int height;

public:

	Rectangle() {
		width = 1; height = 1;
	}
	Rectangle(int w, int h) {
		if (w >= 0 && h >= 0) {
			cout << "���� ����� �Է��ϼ���" << endl;
		}
		width = w; height = h;
	}

	int getArea();
	
	/*void setW(int w) {
		if (w <= 0) {
			cout << "�ʺ�� ������� �մϴ�." << endl;
		}
		else {
			width = w;
		}
	}
	void setH(int h) {
		if (h <= 0) {
			cout << "���̴� ������� �մϴ�." << endl;
		}
		else {
			height = h;
		}
	}*/

	int getW() { return width; }
	int getH() { return height; }
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Circle donut; //Circle�̶�� Ŭ������ �ڷ���ó�� ��� -> Ŭ���� Circle��� ���赵�� donut��� ��ü�� �� ( ��ü ���� )
	donut.radius = 1; // �ش� ��ü�� Ŭ���� �ɹ� ������ �ɹ� �Լ��� ����� �� '.'�� �̿��Ͽ� ������ �� ����.
	double area = donut.getArea();
	cout << "donut�� ������ " << area << endl;

	//Rectangle rect;
	int w, h;

	while (1) {
		cout << "�ʺ�� ���̸� �Է����ּ���.( �� �� 0 �Է� �� ����˴ϴ�. )" << endl << "�ʺ� : ";
		cin >> w;
		cout << "���� : ";
		cin >> h;

		if (w == 0 && h == 0) break;
		/*rect.setW(w);
		rect.setH(h);*/
		Rectangle A(w, h);
		cout << A.getArea() << endl;
		
	}
}