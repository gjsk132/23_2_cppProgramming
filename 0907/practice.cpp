//p88 실습문제 1

//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			cout << i * 10 + j << "\t";
//		}
//		cout << endl;
//	}
//}


//p89 실습문제 5

//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//	char str[100];
//	int cnt = 0;
//	cin.getline(str, 100);
//
//	for (int i = 0; i < 100; i++) {
//		if (str[i] == 'x') cnt++;
//	}
//
//	cout << "x의 개수는 " << cnt << endl;
//
//}


//p91 실습문제 10

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	char str[100];
//	cin.getline(str, 100);
//	int len = strlen(str); //문자열의 길이를 나타내주는 함수
//
//	for (int i = 0; i < len; i++) {
//		if (str[i] == '\0') return 0;
//		for (int j = 0; j <= i; j++) {
//			cout << str[j];
//		}
//		cout << endl;
//	}
//}
