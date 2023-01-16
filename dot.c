//to find the dot product of two given matrix
#include<stdio.h>
#define N 50
int main (){
int c[N][N],i,j,m,n,p,q,sum,r,e,f;
printf("enter the size of row and column =");
scanf("%d%d",&m,&n); 
int a[m][n];
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("enter the elements=");
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("enter the size of row and column =");
scanf("%d%d",&p,&q);
int b[p][q];
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        printf("enter the elements= ");
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        printf("%d ",b[i][j]);
            }
    printf("\n");
}
printf("the multiplication of the two matrix are =\n");
if(n!=p){
    printf("CANNOT BE MULTIPLY");
}
else
{
for(i=0;i<m;i++){
    for(j=0;j<q;j++){
        sum=0;
        for(r=0;r<m;r++){
    sum=sum+(a[i][r]*b[r][j]);
       } 
        c[i][j]=sum;
}
}
for(i=0;i<m;i++){
    for(j=0;j<q;j++){
printf("%d ",c[i][j]);
    }
printf("\n");
}
}
return 0;
}




