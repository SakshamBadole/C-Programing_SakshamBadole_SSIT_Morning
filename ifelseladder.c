#include <stdio.h>
void main(){
    int marks;
    printf("enter marks");
    scanf("%d", & marks);
 if (marks>=80 & marks<=100){
   printf ("A grade");
 }
 else if (marks>=50 & marks <=80) {
     printf("B grade ");
 }
 else{
    printf("C grade");
 }
}