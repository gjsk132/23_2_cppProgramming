#include <iostream>
#include <cstring>
using namespace std;

//class -> 캡슐화

class Test {
private:
	int num;
public:
	Test(int n) : num(n) {} //initializing? 용법
	Test& Add(int n) {
		num += n;
		return *this;
	}
	void output() const { // 해당 함수 안에서 num을(맴버변수를) 변화시키지 않는다.
		cout << "num : " << num << endl;
	}
	void show() {
		cout << num << endl;
	}
	void show() const { // const가 붙으면 같은 함수명을 가져도 오버로딩이 가능함.
		cout << "const 함수 :" << num << endl;
	}
};

void overfunc(const Test& ob) {
	ob.show();
}

int main(void) {

	//(1)
	//const Test test(10);
	////test.Add(15);
	////const Test로 인해 맴버 변수가 고정 -> 변경 불가능.
	//test.output();

	//Test test2(15);
	//test2.Add(20);
	//test2.output();

	const Test test1(10);
	Test test2(20);

	test1.show(); // test1은 const 객체이기 때문에 show const가 실행
	test2.show(); // const 아닌 객체 -> 그냥 show

	overfunc(test1); // test를 const 객체로 호출 -> test2도 const객체
	overfunc(test2);

	return 0;
}