#include<stdio.h>
int main(){
int n,i,j,b,c,d;
printf("enter the size of array = ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("enter the elements =");
    scanf("%d",&a[i]);
}
printf("the unsorted array is =");
for(i=0;i<n;i++){
    printf("%d ,",a[i]);
}
printf("\n");
for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
    if(a[j]>a[j+1]){
      b=a[j];
a[j]=a[j+1];
a[j+1]=b;
    }
}
}
printf("the sorted array is =");
for(i=0;i<n;i++){
printf("%d ,",a[i]);
}
printf("\n");
return 0;
}