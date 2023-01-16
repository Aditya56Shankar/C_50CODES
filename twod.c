#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("enter the total students = ");
    scanf("%d",&m);
    printf("enter the total marks = ");
    scanf("%d",&n);
    int a[m][n];
    for(i=0,j=0;i<n,j<m;i++,j++){
        printf("enter the roll number =");
        scanf("%d",&a[i]);
        printf("enter the marks =");
        scanf("%d",&a[j]);
             }
            for(i=0,j=0;i<n,j<m;i++,j++)
            {
                printf("%d was scored by roll number =%d\n",a[j],a[i]);
            }
            return 0;
}