#include <stdio.h>
    void main(){
        int a;
    printf("enter number:");   
    scanf("%d",&a);
   if(a % 5 == 0){
    printf("%d is divisible by 5",a);
   } 
   else if (a% 11 == 0){
    printf("%d is dividible by 11",a);
   }
   else {
    printf("%d is not divisible by 5 or 11",a);
   }
    }