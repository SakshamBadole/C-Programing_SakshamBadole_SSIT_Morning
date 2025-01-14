#include <stdio.h>
void main(){
	int num,i=0;
	int mul;
	printf("Enter number:");
	scanf("%d",&num);
while(i<=10){
	mul=num*i;
	printf("%d*%d=%d\n",num,i,mul);
	i++;
}	
}
