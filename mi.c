#include<stdio.h>
int main(){
    int size,i;
    printf("enter the size of the array=");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter the elements=");
        scanf("%d",&a[i]);
    }
 for(i=0;i<size;i++){
    printf(" the unsorted array is =%d ,",a[i]);
 }
     int j,b;
     for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if(a[j]>a[j-1]){
                b=a[j];
                a[j]=a[j-1];
                a[j]=b;
            }
            }
     }
    printf("the sorted array is=");
    for(i=0;i<=size;i++){
        printf("%d ,",a[i]);
    }
return 0;
}