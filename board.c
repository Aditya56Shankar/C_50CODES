#include<stdio.h>
int main(){
    /*press 1 for C.B.S.E and 2 for U.P.BOARD*/
    int CBSE=1,UPBOARD=2;
    printf("ENTER BOARD NUMBER");
    scanf("%d",&CBSE);
     printf("ENTER BOARD NUMBER");
    scanf("%d",&UPBOARD);
    switch(CBSE)
    {
        case1:printf("welcome to c.b.s.e board");
        scanf("%d",CBSE);
        switch(UPBOARD)
        {
    case2:printf("welcome to U.P.BOARD");
    scanf("%d",UPBOARD);
    break;
    default:printf("you are not from u.p board");
    }
    break;
     default:printf("you are not from C.B.S.E board ");
 }
 return 0;

}