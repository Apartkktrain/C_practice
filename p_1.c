#include <stdio.h>


void scan();
void input();
void calc();
void ifif();
void switchs();
void forfor();

void main() {
    forfor();
}

void calc() {
	printf("%d\n", 5 + 3);
	printf("���{��̏o��\n�v�Z�F%d", 5 + 1);
}

void scan(){
	char word[16] = "���͂͂͂�";
	printf("%s", word);
}

void input() {
    /*qita�̋L�����Q�l�ɁB
    �o�T��:https://qiita.com/softnakikaiya/items/39b74e370acfc22db548
    */

        char string1[10];
        char string2[10];
        char string3[10];

        printf("%s", "�ŏ��̕��������Ă�������:");
        scanf_s("%s", string1, 10);    /*������1:abcdefghijklmn�Ɠ��͂���*/
        scanf_s("%s", string2,10);      /*������2:abc�Ɠ��͂���*/
        scanf_s("%s", string3, 10);    /*������3:abcdefghijklmn�Ɠ��͂���*/

        printf("%s", string1);        /*��O�����Ŏw�肵�����ȏ����͂���Ɖ����\������Ȃ�*/
        printf("%s", string2);        /*�ǂ�ȓ��͂����Ă��G���[*/
        printf("%s", string3);        /*abcde��5�����\�������*/
}

void ifif() {
    int n = 1;
    if (n != 3) {
        printf("OK");
    }
    else {
        printf("NG");
    }
}

void switchs() {
    int n= 0;
    scanf_s("%d",&n);
    switch (n)
    {
    case 1:
        printf("1�ł�");
        break;
    case 2:
        printf("2�ł��B");
    default:
        printf("���̑��ł��B");
        break;
    }
}

void forfor() {
    for (int n = 10; n < 30; n++) {
        printf("%d\n", n);
    }
}