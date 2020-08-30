#include<stdio.h>
int main()
{
    int a,b,s,d,m,n;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the the second number:\n");
    scanf("%d",&b);
    s=a+b;
    d=a-b;
    m=a*b;
    n=a/b;
    printf("The sum of %d and %d is:%d\n",a,b,s);
    printf("The difference of %d and %d is:%d\n",a,b,d);
    printf("The product of %d and %d is:%d\n",a,b,m);
    printf("The division between %d and %d is:%d\n",a,b,n);
    return 0;


}
