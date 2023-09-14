#include <iostream>
#include <string.h>
using namespace std;

class movie {
private:
	string movieTitle;
	string director;
	double ratio;
public:
	movie() {
		movieTitle = "";
		director = "";
		ratio = 0.0;
	}

	movie(string m, string d, double r) {
		movieTitle = m;
		director = d;
		ratio = r;
	}

	~movie(){ // ������ �ϳ��� �����Ѵ�.
		cout << movieTitle << " ��ü �Ҹ�" << endl;
	}

	void showMovie();

};

void movie::showMovie() {
	cout << "��ȭ ���� : " << movieTitle << endl;
	cout << "��ȭ ���� : " << director << endl;
	cout << "��ȭ ���� : " << ratio << endl;
}

int main() {

	cout << "==============================" << endl;

	cout << "<< ù��° ��ȭ #1 >>" << endl;

	movie fstMovie{ "�� Ȧ�� ����", "ũ���� �ݷҹ���", 9.1 }; // �߰�ȣ..?
	fstMovie.showMovie();

	cout << "==============================" << endl;

	cout << "<< �ι�° ��ȭ #2 >>" << endl;

	movie sndMovie("�͹̳�����", "���ӽ� ī�޷�", 9.85);
	sndMovie.showMovie();

}