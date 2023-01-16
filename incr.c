#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a =");
    scanf("%d",&a);
    printf("enter b =");
    scanf("%d",&b);
    printf("enter c =");
    scanf("%d",&c);
    if(a>b>c){
        printf("a is greater than b and c\n");
    }
    else if(a<b<c){
        printf("a is less than b and c\n");
    }
   else if(a>c>b){
        printf("a is greater than b and c\n");
    }
    else if (a<c<b){
        printf("a is less than b and c\n");
    }
       else if(c>b>a){
        printf("c is greater than b and a\n");
    }
    else if (c<b<a){
        printf("c is less than b and a\n");
    }
        else if(c>a>b){
        printf("c is greater than b and a\n");
    }
    else if (c<a<b){
        printf("c is less than b and a\n");
    }
        else if(b>c>a){
        printf("b is greater than a and c\n");
    }
    else if(b<c<a){
        printf("b is less than a and c\n");
    }
        else if(b>a>c){
        printf("b is greater than a and c\n");
    }
    else{
        printf("b is less than a and c\n");
    }
    return 0;
}
