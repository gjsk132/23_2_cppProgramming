#include <iostream>

//using namespace를 사용 -> 간략화

using namespace std;
//using std::cout;
//using std::endl;


namespace a_school {
	void ft() {
		cout << "a_school 공간" << endl;
	}
}

namespace b_school {
	void ft() {
		cout << "b_school 공간" << endl;
	}
}


int main(void) {
	int a = 1;
	double b = 3.14;

	std::cout << "hello" << a << b << 56 << std::endl;

	//std라는 namespace에 포함된 함수들을 std 사용없이 간략하게 사용할 수 있게 해줌.
	cout << "hello" << a << b << 56 << endl;


	//다른 namespace공간에 같은 이름의 함수 사용
	b_school::ft();


	return 0;
}