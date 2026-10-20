#include <stdio.h>

int main(void) {
    /* 課題0403: 入力されたintのデータを1.08倍した結果を整数(int)として表示するプログラムを書け．intへの変換には「キャスト演算(前回スライドを参照のこと)」を使用せよ */
    int a;
    double b;
    scanf("%d",&a);
    b=(double)a*1.08;
    printf("%d",(int)b);
    return 0;
}
