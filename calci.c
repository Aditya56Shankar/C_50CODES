#include<stdio.h>
int main()
{
int a,b;
printf("enter a =");
scanf("%d",&a);
printf("enter b =");
scanf("%d",&b);
a+=b;
a-=b;
a*=b;
a/=b;
printf("a+b=%d\n",a+=b);
printf("a-b=%d\n",a-=b);
printf("a*b=%d\n",a*=b);
printf("a/b=%d\n",a/=b);
return 0;
}