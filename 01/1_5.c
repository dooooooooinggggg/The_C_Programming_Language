// 温度を華氏から摂氏に変換するプログラム

#include <stdio.h>

int main(void){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 1;

    fahr = upper;

    printf("%3s:%6s\n", "F", "C");
    while( fahr >= lower ){
        celsius = (5.0 / 9.0) * (fahr-32.0);

        printf("%3.0f %6.0f\n", fahr, celsius);
        fahr = fahr - step;
    }
}
