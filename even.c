#include<stdio.h>
int main()
{
    int a;
    printf("enter a number =");
    scanf("%d",&a);
    if (a%2==0){
        printf("%d is an even number\n",a);
     }
     else{
     printf("%d is a odd number\n",a);
     }
     return 0;
}