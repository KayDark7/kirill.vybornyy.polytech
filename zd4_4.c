#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
int a, b, s, r, p;
float c;
printf("Введите a\n");
scanf("%d", &a);
printf("Введите b\n");
scanf("%d", &b);
s=(a*a)+(b*b);
r=(a*a)-(b*b);
p=(a*a)*(b*b);
c=((float)(a*a))/((float)(b*b));
printf("Сумма = %d \n", s);
printf("Разность = %d \n", r);
printf("Произведение = %d \n", p);
printf("Разность = %f \n", c);
return 0;
}
