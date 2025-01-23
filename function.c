// Que no 1 with argument with returntype
#include <stdio.h>
	int add(int x, int y){
		int result;
		result =x+y;
		return result;
	
	} 
	 void main(){
		int a=2, b=3, r;
		r=add(a, b);
		printf("%d",r);
	}

    //Que 2 without argument without returntype
    #include <stdio.h>
	void add(){
		int a=4, b=2, result;
		result=a-b;
		printf("%d",result);
	
	}
	void main(){
		add();
	}

    // with argument without returntype
    #include <stdio.h>
	void sub(int x, int y){
		int result;
		result=x-y;
		printf("%d",result);
	
	}
	void main(){
		int a=6, b=2;
		sub(a,b);
	}

	// without argument with returntype
	#include <stdio.h>
	int sub(){
		int a=7, b=3;
		result= a-b;
		return result;
	}
	void main(){
		int r;
		r=sub();
		printf("%d",r);
	}

// with argument with returntype
#include <stdio.h>
	int sub(int x, int y){
		int result;
		result= x-y;
		return result;
	}
	void main(){
		int a=4, b=1,r;
		r=sub(a,b);
		printf("%d",r);
	}

//Que 3 without argument without returntype
   #include <stdio.h>
	void mul(){
		int a=7, b=4, result;
		result=a*b;
		printf("%d",result);
	
	}
	void main(){
		mul();
	}

// with argument without returntype
 #include <stdio.h>
	void mul(int x, int y){
		int result;
		result=x*y;
		printf("%d",result);
	
	}
	void main(){
		int a=3, b=3;
		mul(a,b);
	}


// without argument with returntype
#include <stdio.h>
	int mul(){
		int a=6, b=2, result;
		result=a*b;
		return result;
	}
	void main(){
		int r;
		r=mul();
		printf("%d",r);
	}

	// without argument without returntype
	#include <stdio.h>
	int mul(int x, int y){
		int result;
		result= x*y;
		return result;
	}
	void main(){
		int a=8, b=4,r;
		r=mul(a,b);
		printf("%d",r);
	}

//Que 3 without argument without returntype
   #include <stdio.h>
	void div(){
		int a=8, b=4, result;
		result=a/b;
		printf("%d",result);
	
	}
	void main(){
		div();
	}
// with argument without returntype
 #include <stdio.h>
	void div(int x, int y){
		int result;
		result=x/y;
		printf("%d",result);
	
	}
	void main(){
		int a=12, b=3;
		div(a,b);
	}
//without argument with returntype
#include <stdio.h>
	int div(){
		int a=6, b=2, result;
		result=a/b;
		return result;
	}
	void main(){
		int r;
		r=div();
		printf("%d",r);
	}
// without argument without returntype
#include <stdio.h>
	int mul(int x, int y){
		int result;
		result= x*y;
		return result;
	}
	void main(){
		int a=8, b=4,r;
		r=mul(a,b);
		printf("%d",r);
	}

//Que 4 with arugument with returntype Armstrong 
#include<stdio.h>
void amstrong()
{
    int num,rem ,org , sum =0;
    printf("Enter number to check if the number is Armstrong:");
    scanf("%d",&num);
    org =num;
while (num!=0)
	{
 		rem =num % 10;
 		sum = sum + rem* rem* rem ;
 		num =num / 10;
	}

if(org ==sum){
   printf("the number is amstrong: %d", sum);
	}
else{
     printf("the number is not amstrong: %d",org);
}

}
void main()
{
amstrong();
}
// with argument without returntype
#include <stdio.h>
	void armstrong(int x, int y){
		int num,rem ,org , sum =0,result;
	printf("Enter number to check if the number is Armstrong:");
    scanf("%d",&num);
    org =num;
while (num!=0)
	{
 		rem =num % 10;
 		sum = sum + rem* rem* rem ;
 		num =num / 10;
	}

if(org ==sum){
   printf("the number is amstrong: %d", sum);
	}
else{
     printf("the number is not amstrong: %d",org);
}
	
	}
	void main(){
		int a=12, b=3;
		armstrong(a,b);
	}
//without argument with returntype
#include <stdio.h>
	int armstrong(){
		int num,rem ,org , sum =0;
	printf("Enter number to check if the number is Armstrong:");
    scanf("%d",&num);
    org =num;
while (num!=0)
	{
 		rem =num % 10;
 		sum = sum + rem* rem* rem ;
 		num =num / 10;
	}

if(org ==sum){
   printf("the number is amstrong: %d", sum);
	}
else{
     printf("the number is not amstrong: %d",org);
}
}
	
	void main(){
		int r;
		r=armstrong();
	}
// without argument without returntype
#include <stdio.h>
	int armstrong(int x, int y){
		int num,rem ,org , sum =0;
	printf("Enter number to check if the number is Armstrong:");
    scanf("%d",&num);
    org =num;
while (num!=0)
	{
 		rem =num % 10;
 		sum = sum + rem* rem* rem ;
 		num =num / 10;
	}

if(org ==sum){
   printf("the number is amstrong: %d", sum);
	}
else{
     printf("the number is not amstrong: %d",org);
}
}
	void main(){
		int a=8, b=4,r;
		r=armstrong(a,b);
		printf("%d",r);
	}
