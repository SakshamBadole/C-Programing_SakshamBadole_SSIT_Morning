// for repeating the your name in loop 
#include <stdio.h>
void main(){
    int i ;
for (i=1; i<=12;i++ ){
    printf("your name");
}    
}
// decrease number 
#include <stdio.h>
void main(){
    char i ;
for (i=10; i>=1;i-- ){
    printf("%d \n",i);
}    
}

// positive number
#include <stdio.h>
void main(){
    int num ;
printf("enter number");
scanf("%d",&num);

for ( ;num<0; ){
    printf("enter positive number,try again");
    scanf("%d", &num);
}    
}

// cube of number
#include <stdio.h>
void main(){
    int i,num, c=0;
    printf("enter value of number:");
    scanf("%d ",&num);
for (i=1; i<=num; i++ ){
    printf("%d\n",i);
    c= num*num*num;
}   
    printf("cube= %d", c);
}

// multiply
#include <stdio.h>
void main (){
    int i,num,mul;
    printf("enter value of number");
    scanf("%d",&num);
for(i=1;i<=10;i++){
    mul=num*i;
    printf("\n%d * %d = %d",i,num,mul);
}    
}