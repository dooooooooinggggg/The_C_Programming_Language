#include <stdio.h>

main()
{
    int c, nl, sl, tl;

    nl = 0;
    sl = 0;
    tl = 0;

    while ((c = getchar()) != EOF)
    {

        if (c == "\t")
        {
            tl++;
        }

        if (c == " ")
        {
            sl++;
        }

        if (c == "\n")
        {
            nl++;
        }

        printf("c:%d\n", c);
    }
    printf("nl:%d, tl:%d, sl:%d\n", nl, tl, sl);
}
