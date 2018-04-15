//
// Created by Ishikawa Tatsunori on 2017/09/09.
//

//getcher() != EOFが0 or 1 かを確認

#include <stdio.h>

main(){
    double nc;

    for ( nc = 0; getchar() != EOF; nc++ ){
        ;
    }
    printf( "%.0f\n", nc );
}
