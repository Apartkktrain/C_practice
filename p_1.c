#include <stdio.h>

void scan();
void input();

void main() {
    input();
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

        scanf_s("%s", string1, 10);    /*������1:abcdefghijklmn�Ɠ��͂���*/
        scanf_s("%s", string2,10);      /*������2:abc�Ɠ��͂���*/
        scanf_s("%5s", string3, 10);    /*������3:abcdefghijklmn�Ɠ��͂���*/

        printf("%s", string1);        /*��O�����Ŏw�肵�����ȏ����͂���Ɖ����\������Ȃ�*/
        printf("%s", string2);        /*�ǂ�ȓ��͂����Ă��G���[*/
        printf("%s", string3);        /*abcde��5�����\�������*/
}