#include<stdio.h>
#include<math.h>
int main()
{
int x,y,x1,y1;
float d;
printf("���������� ����� A\n x = ");
scanf("%d",&x);
printf(" y = ");
scanf("%d",&y);
printf("���������� ����� B\n x = ");
scanf("%d",&x1);
printf(" y = ");
scanf("%d",&y1);
d = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
printf ("���������� ����� ������� = %f\n", d);
return 0; 
}
