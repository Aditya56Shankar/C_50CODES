#include<stdio.h>
int main()
{
    int age;
    printf("enter age =");
    scanf("%d",&age);
    if(age>18){
        printf("you are adult\n");
    }
    else {
        printf("you are child\n");
    }
    return 0;
}