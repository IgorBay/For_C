#include<stdio.h>
int main(void)
{
    FILE *in, *out;
    int c;


    if ( (in = fopen ("house.txt", "r")) == NULL )
    {
        printf ("Don't read %s\n", "house.txt");
        return 1;
    }

    if ( (out = fopen ("copyhouse.txt", "w")) == NULL )
    {
        printf ("Don't written %s\n", "copyhouse.txt");
        return 2;
    }

    while ( (c = getc (in)) != EOF )
        putc (c-32, out);

    fclose (in);
    fclose (out);
    printf ("Copy success\n");

    return 0;
}
