#include<stdio.h>

int main()
{
    int X, ch=0, nch=0, S2=0, S1=0;
    float SR2, SR1;
    scanf("%i", &X);
    while(X != 0)
    {
        if(X%2==0){
        S2=X+S2;
        ++ch;}

        else{
        S1=X+S1;
        ++nch;}
           scanf("%i", &X);
    }

    SR2 = S2/ch;
    SR1 = S1/nch;

    printf("Sum_ch: %i\n", S2);
    printf("Sum_nch: %i\n", S1);
     printf("K_ch: %i\n", ch);
      printf("K_nch: %i\n", nch);
    printf("SREDNEE_ch: %f\n", SR2);
    printf("SREDNEE_nch: %f\n", SR1);

return 0;
}
