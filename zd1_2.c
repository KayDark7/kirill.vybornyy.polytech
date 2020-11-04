#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
int d;
float l;
printf("¬ведите d\n");
scanf("%d", &d);
float p=3.14;
l=d*p;
printf("L = %f \n", l);
return 0;
}
