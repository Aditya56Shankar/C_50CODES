#include<stdio.h>
int main(){
int a[3],b[3],c[3];
int i;
for(i=0;i<3;i++){
    printf("enter the elements first of array = ");
    scanf("%d",&a[i]);
}
for(i=0;i<3;i++){
    printf("enter the elements second of array =");
    scanf("%d",&b[i]);
}
for(i=0;i<3;i++){
    c[i]=a[i]+b[i];
printf("the sum of two array%d and %d at index %d=%d\n",a[i],b[i],i,c[i]);
}       
return 0;
}