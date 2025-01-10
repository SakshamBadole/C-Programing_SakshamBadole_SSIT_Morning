#include <stdint.h>
    void main(){
        int a,b,c;
        printf("enter number:");
        scanf("%d",&a);
        printf("enter number:");
        scanf("%d",&b);
        printf("enter number:");
        scanf("%d",&c);
    if(a>b && a>c){

     printf("%d is maximum",a);

    }
    else if(b>a && b>c){

     printf("%d is maximum",b);

    }
    else if(c>a && c>b){

     printf("%d is maximum",c);

    }
    else {
        printf("both are same");
    }
    }