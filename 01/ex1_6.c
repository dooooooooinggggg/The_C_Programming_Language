//
// Created by Ishikawa Tatsunori on 2017/09/09.
//

//getcher() != EOFが0 or 1 かを確認

#include <stdio.h>

main()
{
    int c;

    while (c = (getchar() != EOF))
        printf("%d\n", c);

    printf("EOF:%d\n", c);
}