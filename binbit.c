#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *byte_to_binary(int x);

int main(void)
{
    {

        char *tmp;
        char *pbin = "01001001";

        printf("%d\n", strtol(pbin, &tmp, 2));
    }

    return 0;
}

char *byte_to_binary(int x)
{
    char pbin[9];
    pbin[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(pbin, ((x & z) == z) ? "1" : "0");
    }

    return pbin;
}
