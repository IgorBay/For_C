#include<stdio.h>

int main()
{
    int i, S;
    char symbol;
    char strk[] = "qwertyuiopasdfghjklzxcvbnm\0";
    printf("qwertyuiopasdfghjklzxcvbnm\n");

    printf("Enter symbol: \n");
    scanf("%c", &symbol);

    for( i=0; i<27 ; ++i)
    {
        if(strk[i] == symbol)
        ++S;
    }

    if(S>0)
    {
        printf("Symbol %c : %i", symbol, S);
    } else {printf("No symbol");}

return 0;
}
