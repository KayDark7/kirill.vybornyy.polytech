#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
int a, b, s, r, p;
float c;
printf("������� a\n");
scanf("%d", &a);
printf("������� b\n");
scanf("%d", &b);
s=(a*a)+(b*b);
r=(a*a)-(b*b);
p=(a*a)*(b*b);
c=((float)(a*a))/((float)(b*b));
printf("����� = %d \n", s);
printf("�������� = %d \n", r);
printf("������������ = %d \n", p);
printf("������� = %f \n", c);
return 0;
}
