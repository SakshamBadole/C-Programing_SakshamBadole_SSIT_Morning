#include <stdio.h>
void main(){
    int a,c,b;
 printf("enter value of a");
 scanf("%d", &a);
  printf("enter value of b");
 scanf("%d", &b);
    c=a;
    a=b;
    b=c;
   printf ("after swapping value of a is %d and value of b is %d", a,b) ;
}