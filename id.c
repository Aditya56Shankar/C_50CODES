#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    a>b;
    a<b;
    a==b;
    a>=b;
    a<=b;
    printf("a is greater than b=%d\n",a>b);
    printf("b is greater than a =%d\n",b>a);
    printf("b is greater than equal to a =%d\n",b>=a);
    printf("a is greater than equal to b=%d\n",a>=b);
    printf("a is equal to b=%d\n",a==b);
    return 0;
}