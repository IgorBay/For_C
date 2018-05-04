#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int c,b;
    FILE *file1, *file2, *file3;
    char buffer_1[200]={0};
    char buffer_2[200]={0};

    if( (file1 = fopen("file_1.txt", "r")) == NULL)
    {
        printf("Do not open file_1\n");
        exit(1);
    }
    if( (file2 = fopen("file_2.txt", "r")) == NULL)
    {
        printf("Do not open file_2\n");
        exit(1);
    }

 while ( (c = getc (file1)) != EOF )
        putc (c-32, file3);






    fclose(file1);
    fclose(file2);

    return 0;
}




