#include<stdio.h>
void even();
int main(){
    even();
    return 0;
}
void even(){
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    if(a%2==0){
        printf("even");
    }
    else
    printf("odd");
}