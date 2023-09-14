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

	~movie(){ // 무조건 하나만 존재한다.
		cout << movieTitle << " 객체 소멸" << endl;
	}

	void showMovie();

};

void movie::showMovie() {
	cout << "영화 제목 : " << movieTitle << endl;
	cout << "영화 감독 : " << director << endl;
	cout << "영화 평점 : " << ratio << endl;
}

int main() {

	cout << "==============================" << endl;

	cout << "<< 첫번째 영화 #1 >>" << endl;

	movie fstMovie{ "나 홀로 집에", "크리스 콜롬버스", 9.1 }; // 중괄호..?
	fstMovie.showMovie();

	cout << "==============================" << endl;

	cout << "<< 두번째 영화 #2 >>" << endl;

	movie sndMovie("터미네이터", "제임스 카메론", 9.85);
	sndMovie.showMovie();

}