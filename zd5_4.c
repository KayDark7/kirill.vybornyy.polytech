#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
int main()
{
int x1,y1,x2,y2;
float S,P;
printf("���������� ������� 1\n x = ");
scanf("%d",&x1);
printf(" y = ");
scanf("%d",&y1);
printf("���������� ������� 2\n x = ");
scanf("%d",&x2);
printf(" y = ");
scanf("%d",&y2);
S = abs(x1-x2) * abs(y1-y2);
P = 2*(abs(x1-x2)+(y1-y2));
printf ("������� = %f\n", S);
printf ("�������� = %f\n", P);
return 0; 
}
