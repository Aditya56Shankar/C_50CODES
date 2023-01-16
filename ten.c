#include<stdio.h>
int main (){
    int a,i;
    printf("from which value :");
    scanf("%d",&a);
    printf("upto which value :");
    scanf("%d",&i);
    for(a>0;a<=i;a++){
        printf("%d\n",a);
    }
    return 0;
}