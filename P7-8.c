#include<stdio.h>
#define percent1 0.15
#define percent2 0.2
#define percent3 0.25

int main()
{
int Var;
float stavka, hours, clean_zp, Sum;

printf("1) $8.75/h           2) $9.33/h\n");
printf("3) $10.00/h          4) $11.20/h\n5)Exid\n");

while(Var != 5)
{
    scanf("%i", &Var);

    switch (Var)
	{
		case 1:
			stavka = 8.75;
			break;
		case 2:
			stavka = 9.33;
			break;
		case 3:
			stavka = 10.00;
			break;
		case 4:
			stavka = 11.20;
			break;
		default:
			printf("Enter variant\n");
	}


printf("Hours: ");
scanf("%f", &hours);

if(hours>40)
{
 Sum = hours*stavka*1.5;
} else { Sum = hours*stavka; }

if(Sum<=300)
{
    clean_zp = Sum * (1-percent1);
} else if (300<Sum<=450)
{
    clean_zp = Sum * (1-percent1) + (Sum-300) * (1 - percent2);
} else { clean_zp = Sum * (1-percent1) + (Sum-300) * (1 - percent2) + (Sum-450)*(1 - percent3); }

printf("Summa: %f\n", Sum);
printf("Polucheno: %f\n", clean_zp);
printf("Nalog: %f\n", Sum-clean_zp);
}
return 0;
}
