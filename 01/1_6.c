//
// Created by Ishikawa Tatsunori on 2017/09/09.
//

//getcher() != EOFが0 or 1 かを確認

#include <stdio.h>

main()
{
    int c;

    while(1) {
        c = getchar();
        putchar(c);
        if( c == EOF ) {
            printf("\nc == EOF:1!!\n");
            break;
        }else{
            printf("\nc == EOF:0\n");
        }
    }


}