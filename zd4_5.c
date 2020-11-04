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
s=(abs(a))+(abs(b));
r=(abs(a))-(abs(b));
p=(abs(a))*(abs(b));
c=((float)(abs(a)))/((float)(abs(b)));
printf("Ñóììà = %d \n", s);
printf("Ðàçíîñòü = %d \n", r);
printf("Ïðîèçâåäåíèå = %d \n", p);
printf("×àñòíîå = %f \n", c);
return 0;
}
