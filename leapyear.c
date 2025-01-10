#include <stdio.h>
    void main(){
        int a;
        printf("enter year:");
        scanf("%d",&a);
    if ( a % 4==0 && (a % 100!=0 || a % 400==0) ){
        printf("%dis equal to leap year",a);
    }    
    else {
        printf("%d is not equal to leap year",a);
    }
}