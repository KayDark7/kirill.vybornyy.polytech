#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
int a, b;
float s;
printf("Введите a\n");
scanf("%d", &a);
printf("Введите b\n");
scanf("%d", &b);
s=((float)(a+b))/2;
printf("S = %f \n", s);
return 0;
}
