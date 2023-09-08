#include <iostream>

using namespace std;

class Circle { // 클래스 선언 시, 형식
public: // public 클래스 내부에서나 외부에서도 접근할 수 있음.
	int radius; // 맴버 변수
	double getArea(); // 맴버 함수
	/*{ 클래스 내부에서도 구현 가능하지만, 클래스 안 내용의 가독성을 위해 선언만 하고 클래스 외부에서 구현
		return 3.14 * radius * radius;
	}*/

	// 함수 오버로딩 : 매개변수가 있는 경우와 없는 경우 여러 개를 동시에 쓸 수 있음. (생성자 중복 가능)
	// 리턴 타입이 없음 / 객체가 실행될 때 한 번 사용된다. // 목적 : 객체 내의 초기화
	Circle(); //기본적으로 바로 들어오는 경우 
	Circle(int r); // 매개변수가 있는 경우

};

//:: -> 범위지정 연산자

//클래스 외부에서 클래스 내부에 있는 함수를 구현할 때, 해당 함수가 어디에 속해 있는지 알려줘야한다.
double Circle::getArea() { // 따로 빼서 맴버 함수를 구현. 왜? -> 클래스 안에 내용이 너무 복잡해지는 경우를 예방
	return 3, 14 * radius * radius;
}

Circle::Circle() { // 값이 아무것도 없을 때, 기본적으로 1로 설정되도록 되어 있음
	radius = 1;
}

Circle::Circle(int r) { // 값이 매개변수를 통해 들어오면, 해당 값을 사용해 초기값을 정함
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
			cout << "수는 양수로 입력하세요" << endl;
		}
		width = w; height = h;
	}

	int getArea();
	
	/*void setW(int w) {
		if (w <= 0) {
			cout << "너비는 양수여야 합니다." << endl;
		}
		else {
			width = w;
		}
	}
	void setH(int h) {
		if (h <= 0) {
			cout << "높이는 양수여야 합니다." << endl;
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
	Circle donut; //Circle이라는 클래스를 자료형처럼 사용 -> 클래스 Circle라는 설계도로 donut라는 객체를 찍어냄 ( 객체 생성 )
	donut.radius = 1; // 해당 객체에 클래스 맴버 변수나 맴버 함수를 사용할 때 '.'을 이용하여 가져올 수 있음.
	double area = donut.getArea();
	cout << "donut의 면적은 " << area << endl;

	//Rectangle rect;
	int w, h;

	while (1) {
		cout << "너비와 높이를 입력해주세요.( 둘 다 0 입력 시 종료됩니다. )" << endl << "너비 : ";
		cin >> w;
		cout << "높이 : ";
		cin >> h;

		if (w == 0 && h == 0) break;
		/*rect.setW(w);
		rect.setH(h);*/
		Rectangle A(w, h);
		cout << A.getArea() << endl;
		
	}
}