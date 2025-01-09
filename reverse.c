#include <stdio.h>
void main(){
    int num, d1, d2, d3 ,d4 ,d5, rev ;
 printf("enter a number ");
 scanf("%d", &num);
     d1 = num %10;
     num = num/10;
     d2 = num %10;
     num = num/10;
     d3 =num %10;
     num = num/10;
     d4 = num %10;
     num = num/10;
     d5 = num %10;
   rev= d1*10000 + d2*1000 + d3*100 + d4*10 + d5 *1;
   printf ("riverse number is %d", rev);
}