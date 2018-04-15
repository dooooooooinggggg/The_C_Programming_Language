// 温度を摂氏から華氏に変換するプログラム

#include <stdio.h>

int main(void){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 1;

    fahr = lower;
    while( fahr <= upper ){
        celsius = (5.0 / 9.0) * (fahr-32.0);

        // 見出しとは
        printf("%3.0f %6.0f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
