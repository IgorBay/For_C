#include <stdio.h>

void strcat(char *line,char *line2);

int main(void)
{
  char line[100]="Iron ";
  char line2[]=" man";
  strcat(line,line2);
  printf("%s",line);
  return 0;
}

void strcat(char *s,char *t)
{
  while ((*s++)!='\0')
    ;
  --s;
  while ((*s++=*t++)!='\0')
    ;
}
