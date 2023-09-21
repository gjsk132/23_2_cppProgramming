#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)

// 일단은 파일 읽어오기 부터

char* words[10000];
int n = 0;

int main() {

    // 파일을 읽는 용도로 연다.
    FILE* fp = fopen("harry.txt", "r");
    // 파일 제대로 안 불러와지면 오류코드 출력 후 종료
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // 하나의 영단어 저장
    char buf[21];

    int cnt = 0;

    //문서 스캔
    while (fscanf(fp, "%s", buf) != EOF) {
        cnt++;
        //printf("cnt : %d -- ",cnt);
        int i = 0;
        for (; i < n; i++) {
            // 같은게 나오면 배열에 들어오지 않고 반복문이 종료됨
            if (strcmp(buf, words[i]) == 0) break;

            // words에 있는 단어가 buf보다 커지는 순간을 i로 할 수 있로독 바로 종료
            else if (strcmp(buf, words[i]) < 0) {
                printf("UP In word : %s\n");
                break;
            }
        }

        //맨끝이면 맨 끝에
        if (i == n) {

            words[n++] = strdup(buf);
        }

        else {
            for (int j = n - 1; j > i; j--) {
                strcpy(words[j], words[j - 1]);
            }
            words[i] = strdup(buf);
            n++;
        }
    }

    fclose(fp); // 파일 닫기

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    printf("\nEND\n");

    return 0;
}