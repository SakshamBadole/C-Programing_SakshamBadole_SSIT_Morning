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
