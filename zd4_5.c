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
s=(abs(a))+(abs(b));
r=(abs(a))-(abs(b));
p=(abs(a))*(abs(b));
c=((float)(abs(a)))/((float)(abs(b)));
printf("Сумма = %d \n", s);
printf("Разность = %d \n", r);
printf("Произведение = %d \n", p);
printf("Разность = %f \n", c);
return 0;
}
