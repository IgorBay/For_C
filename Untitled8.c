#include <stdio.h>

int main()
{
int i_1 , i_2 , i_3 , j_1 , j_2 , j_3 , ch1 , ch2 , ch3;

i_1 = 365;
i_2 = 12,258;
i_3 = 996;

j_1 = 7;
j_2 = 23;
j_3 = 4;

ch1 = i_1 + j_1 - (i_1 % j_1);
ch2 = i_2 + j_2 - (i_2 % j_2);
ch3 = i_3 + j_3 - (i_3 % j_3);

printf("answer 1 = %i ; answer 2 = %i ; answer 3 = %i", ch1 , ch2 , ch3 );

return 0;
}
