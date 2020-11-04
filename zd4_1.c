#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
int a, b, s, p;
printf("Введите a\n");
scanf("%d", &a);
printf("Введите b\n");
scanf("%d", &b);
s=a*b;
p=2*(a+b);
printf("S = %d \n", s);
printf("P = %d \n", p);
return 0;
}
