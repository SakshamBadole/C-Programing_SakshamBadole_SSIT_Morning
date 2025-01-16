// rows coloumn
#include <stdio.h>
void main(){
	int i,j,A[3][3];
	printf("Enter elements of an array:\n");

	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	
	scanf("%d",&A[i][j]);
	
}
}
	printf("Enter array is:\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		printf("%d",A[i][j]);
	}

	printf("\n");
}
}

// Que no.3 Addition of 2 matrix
#include <stdio.h>
void main(){
	int i,j,A[2][2], B[2][2], C[2][2];
	printf("Enter elements of an array:");

	for(i= 0; i<2; i++){
	for(j=0; j<2; j++){
	
	scanf("%d",&A[i][j]);
}
}
printf("Enter elements of an array:");
	for(i= 0; i<2; i++){
	for(j=0; j<2; j++){
	
	scanf("%d",&B[i][j]);
}
}

	for(i= 0; i<2; i++){
	for(j=0; j<2; j++){
		C[i][j]=A[i][j]+B[i][j];
	}
}
		
	printf("Addition of array is:\n");
	for(i=0; i<2; i++){
	for(j=0; j<2; j++){
		printf("%d",C[i][j]);
	}

	printf("\n");
}
}
// Que no.4 Addition of right Diagonals
#include <stdio.h>
void main(){
	int i,j,A[3][3], sum=0;
	printf("Enter elements of an array:");

	for(i= 0; i<3; i++){
	for(j=0; j<3; j++){
	
	scanf("%d",&A[i][j]);
}
}

	for(i= 0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==j){
			sum=sum+A[i][j];
		}
	}
}
		printf("Addition of diagonals:");
		{
			printf("%d",sum);
		}
}

// Que no.5 Addition of left diagonals
#include <stdio.h>
void main(){
	int i,j,A[3][3], sum=0;
	printf("Enter elements of an array:");

	for(i= 0; i<3; i++){
	for(j=0; j<3; j++){
	
	scanf("%d",&A[i][j]);
}
}

	for(i= 0; i<3; i++){
	for(j=0; j<3; j++){
		if(i+j==2){
			sum=sum+A[i][j];
		}
	}
}
		printf("Addition of left diagonals:");
		{
			printf("%d",sum);
		}
}
//Que no.6
#include <stdio.h>
void main(){
	int i,j,A[3][3], B[3][3];
	printf("Enter elements of an array:");

	for(i= 0; i<3; i++){
	for(j=0; j<3; j++){
	
	scanf("%d",&A[i][j]);
}
}
	printf("Enter elements of an array:");

	for(i= 0; i<3; i++){
	for(j=0; j<3; j++){
	
	scanf("%d",&B[i][j]);
}
}
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(A[i][j]==B[i][j]){
			printf("It is equal\n");
		}

		else{
			printf("It is not equal\n");
		}
	}
}
}


