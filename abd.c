#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b); 
    printf("enter c=");
    scanf("%d",&c);
    if(a<b&&a<c&&b<c)
    {
    printf("%d<%d<%d",a,b,c);
    }
    else if(a<c&&a<b&&c<b)
    {
    printf("%d<%d<%d",a,c,b);
    }
    else if(c<a&&a<b&&c>b)
    {
    printf("%d<%d<%d",c,a,b);
    } 
    else if(c<b&&b<a&&c<a)
    {
    printf("%d<%d<%d",c,b,a);
    } 
    else if(b<a&&a<c&&b<c)
    {
    printf("%d<%d<%d",b,a,c);
    } 
    else if(b<c&&c<a&&b<a)
    {
    printf("%d<%d<%d",b,c,a);
    } 
    else
    {
    printf("no number");
    }
    return 0;
}