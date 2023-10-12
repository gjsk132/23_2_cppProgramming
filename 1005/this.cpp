#include <iostream>
using namespace std;

class ThisDef {
	int num;
public:
	ThisDef(int n) : num(n) {

	}
	ThisDef& Add(int n) {
		num += n; // num = 3+2
		return *this; // ��ü �ڽ�
	}
	ThisDef& ShowData() {
		cout << num << endl;
		return *this;
	}
};

int main() {
	ThisDef ob(3);
	//& -> ������ : ref == ob
	ThisDef& ref = ob.Add(2);
	ob.ShowData();
	ref.ShowData();

	ref.Add(1).ShowData().Add(2).ShowData();

	return 0;
}