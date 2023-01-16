#include<stdio.h>
void circle();
int main(){
    circle();
    return 0;
}
void circle(){
    int r,peri,a,d;
    printf("enter radius=");
    scanf("%d",&r);
    peri=2*3.14*r;
    a=3.14*r*r;
    d=2*r;
    printf("diametre =%d\n",d);
     printf("area =%d\n",a);
      printf("circumference =%d\n",peri);

}