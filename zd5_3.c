#include<stdio.h>
#include<math.h>
int main()
{
int x,y,x1,y1,x2,y2;
float d,d1,p;
printf("���������� ����� A\n x = ");
scanf("%d",&x);
printf(" y = ");
scanf("%d",&y);
printf("���������� ����� B\n x = ");
scanf("%d",&x1);
printf(" y = ");
scanf("%d",&y1);
printf("���������� ����� C\n x = ");
scanf("%d",&x2);
printf(" y = ");
scanf("%d",&y2);
d = sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
d1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
p = d*d1;
printf ("������� AC = %f\n", d);
printf ("������� BC = %f\n", d1);
printf ("������������ ���� �������� = %f\n", p);
return 0; 
}
