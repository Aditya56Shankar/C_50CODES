#include<stdio.h>
int main(){
    int cost[3];
    printf("enter cost of material 1");
    scanf("%d",&cost[0]);
    printf("enter cost material 2");
    scanf("%d",&cost[1]);
    printf("enter cost of material 3");
    scanf("%d",&cost[2]);
    
    printf("material 1=%d,material 2=%d,material 3=%d",cost[0],cost[1],cost[2]);
return 0;
}