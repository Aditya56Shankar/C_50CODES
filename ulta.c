#include<STDIO.H>
int main(){
int i,j,d;
printf("upto =");
scanf("%d",&d);
for(i=1;i<=d;i++){
    for(j=d;j>=i;j--){
        printf("*",j);
    }
    printf("\n");
}
return 0;
}