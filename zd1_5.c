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
s=(abs(a))+(abs(b));
r=(abs(a))-(abs(b));
p=(abs(a))*(abs(b));
c=((float)(abs(a)))/((float)(abs(b)));
printf("����� = %d \n", s);
printf("�������� = %d \n", r);
printf("������������ = %d \n", p);
printf("������� = %f \n", c);
return 0;
}
