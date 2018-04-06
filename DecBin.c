#include <stdio.h>

int main(void)
{
	int Dec, ostatok, n = 1 ,i = 0;
	char stroke[n];

	printf("Decimal: ");
	scanf("%i", &Dec);
	while(Dec != 0)
	{
		ostatok = Dec % 2;
		if(ostatok == 0)
			stroke[i] = '0';
		else
			stroke[i] = '1';
		Dec = (Dec - ostatok) / 2;
		n++;
		i++;
	}
	n++;
	stroke[n - 1] = '\0';
	printf("Binary: ");

	for(int j = n - 3; j >= 0 ; --j)
	{
		printf("%c", stroke[j]);
	}
	printf("\n");
}
