#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)

// �ϴ��� ���� �о���� ����

char* words[10000];
int n = 0;

int main() {

    // ������ �д� �뵵�� ����.
    FILE* fp = fopen("harry.txt", "r");
    // ���� ����� �� �ҷ������� �����ڵ� ��� �� ����
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // �ϳ��� ���ܾ� ����
    char buf[21];

    int cnt = 0;

    //���� ��ĵ
    while (fscanf(fp, "%s", buf) != EOF) {
        cnt++;
        //printf("cnt : %d -- ",cnt);
        int i = 0;
        for (; i < n; i++) {
            // ������ ������ �迭�� ������ �ʰ� �ݺ����� �����
            if (strcmp(buf, words[i]) == 0) break;

            // words�� �ִ� �ܾ buf���� Ŀ���� ������ i�� �� �� �ַε� �ٷ� ����
            else if (strcmp(buf, words[i]) < 0) {
                printf("UP In word : %s\n");
                break;
            }
        }

        //�ǳ��̸� �� ����
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

    fclose(fp); // ���� �ݱ�

    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    printf("\nEND\n");

    return 0;
}