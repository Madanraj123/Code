#include<stdio.h>
int main()
{
long int a;
printf("Enter the Number");
scanf("%d",&a);
if(a<0)
{
printf("Negative");
}
else if(a>0)
{
printf("Positive");
}
else if(a==0)
{
printf("Zero");
}
}
