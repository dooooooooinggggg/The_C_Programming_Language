// 温度を摂氏から華氏に変換するプログラム

#include <stdio.h>

int main(void){
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 1;

    celsius = lower;

    printf("%3s:%6s\n", "C", "F");
    while( celsius <= upper ){
        fahr = (9.0 / 5.0) * celsius + 32;

        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
