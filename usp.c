#include<stdio.h>
int main(){
    int a,b;
 
    printf("Enter ID :");
    scanf("%d",&a);
    printf("Enter Password : ");
    scanf("%d",&b);
    
    switch(a)
    {
    case 1:printf("enter password");
    scanf("%d",&b);
   
    switch(b)
    {
    case 2:printf("welcome");
    scanf("%d",&b);
    break;
    default:printf("wrong password");
    }
    break;
    default:printf("invalid id");
    }
    return 0;
    }

