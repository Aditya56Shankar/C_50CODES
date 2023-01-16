#include<stdio.h>
int main(){
    int age;
    printf("enter age=");
    scanf("%d",&age);
    if (age>18){
        printf("You are adult\n");
    }
else if (age<18&&age>13){
    printf ("You are teenager\n");
}
else {
    printf("You are child\n");
}
  return 0;  
}