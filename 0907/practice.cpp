//p88 �ǽ����� 1

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


//p89 �ǽ����� 5

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
//	cout << "x�� ������ " << cnt << endl;
//
//}


//p91 �ǽ����� 10

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	char str[100];
//	cin.getline(str, 100);
//	int len = strlen(str); //���ڿ��� ���̸� ��Ÿ���ִ� �Լ�
//
//	for (int i = 0; i < len; i++) {
//		if (str[i] == '\0') return 0;
//		for (int j = 0; j <= i; j++) {
//			cout << str[j];
//		}
//		cout << endl;
//	}
//}
