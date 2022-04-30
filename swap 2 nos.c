#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number,a=");
    scanf("%d",&a);
    printf("enter the second number,b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped values,a=%d,b=%d,a,b");
    return 0;
}
