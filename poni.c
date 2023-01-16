#include<stdio.h>
int main(){
    int i,n,positive=0,negative=0,zero=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the elements of array =");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0){
        positive++;
        }
        else{
            negative++;
        }
    }
    
    printf("the total number of positive numbers are =%d\n",positive++);
printf("the total number of negative numbers are =%d\n",negative++);
printf("the total number of zeroes are =%d",zero++);
    
return 0;
}