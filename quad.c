//OGWUMIKE CHIKA KENNEDY
//COS/0057/2014

#include <stdio.h>
#include <math.h>
int main(void)
{
double a,b,c,root1,root2;
float det;
printf(" Please enter value for a \n");
scanf("%lf",&a);
printf(" Please enter value for b \n");
scanf("%lf",&b);
printf(" Please enter value for c \n");
scanf("%lf",&c);
det=(b*b)-(4.*a*c);
if (det>0)
{
root1 = (-b + sqrt(det) ) / (2.*a);
root2 = (-b - sqrt(det) ) / (2.*a);
printf("\n First root is %lf ",root1);
printf("\n Second root is %lf ",root2);
}
else
{
printf("\n Discriminant is negative! No roots!");
}
printf("\n ");
return 0;
}

