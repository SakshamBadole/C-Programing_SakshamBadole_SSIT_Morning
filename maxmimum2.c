#include <stdio.h>
    void main(){
        int a,b;
    printf ("enter number :");
    scanf("%d",&a);
    printf("enter number :");
    scanf("%d",&b);
    if(a>b){
        printf("%d maximum ", a);
    }
    else if (b>a){
        printf("%d maximum", b);
    }
    else{
        printf("both are same");
    }

}