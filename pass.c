#include<stdio.h>
int main()
{
    
    int id=1,password=2;
    printf("Enter ID :");
    scanf("%d",&id);
    printf("Enter Password : ");
    scanf("%d",&password);
    
    switch(id)
    {
    case 1:printf("enter password");
    scanf("%d",&password);
   
    switch(password)
    {
    case 2:printf("welcome");
    scanf("%d",&password);
    break;
    default:printf("wrong password");
    }
    break;
    default:printf("invalid id");
    }
    return 0;
    }
