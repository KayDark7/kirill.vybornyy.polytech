#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
int a, b, s, r, p;
float c;
printf("Ââåäèòå a\n");
scanf("%d", &a);
printf("Ââåäèòå b\n");
scanf("%d", &b);
s=(a*a)+(b*b);
r=(a*a)-(b*b);
p=(a*a)*(b*b);
c=((float)(a*a))/((float)(b*b));
printf("Ñóììà = %d \n", s);
printf("Ðàçíîñòü = %d \n", r);
printf("Ïðîèçâåäåíèå = %d \n", p);
printf("×àñòíîå = %f \n", c);
return 0;
}
