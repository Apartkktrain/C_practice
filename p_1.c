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
	printf("日本語の出力\n計算：%d", 5 + 1);
}

void scan(){
	char word[16] = "あはははは";
	printf("%s", word);
}

void input() {
    /*qitaの記事を参考に。
    出典先:https://qiita.com/softnakikaiya/items/39b74e370acfc22db548
    */

        char string1[10];
        char string2[10];
        char string3[10];

        printf("%s", "最初の文字を入れてください:");
        scanf_s("%s", string1, 10);    /*書き方1:abcdefghijklmnと入力する*/
        scanf_s("%s", string2,10);      /*書き方2:abcと入力する*/
        scanf_s("%s", string3, 10);    /*書き方3:abcdefghijklmnと入力する*/

        printf("%s", string1);        /*第三引数で指定した数以上を入力すると何も表示されない*/
        printf("%s", string2);        /*どんな入力をしてもエラー*/
        printf("%s", string3);        /*abcdeと5文字表示される*/
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
        printf("1です");
        break;
    case 2:
        printf("2です。");
    default:
        printf("その他です。");
        break;
    }
}

void forfor() {
    for (int n = 10; n < 30; n++) {
        printf("%d\n", n);
    }
}