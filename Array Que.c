//Que no.1








//Que no.2
#include <stdio.h>
void main(){
	int i,a[5]={1,0,8,0,5};
	int newarray[5], k=0;
	printf("Enter array elements:");
	 
	for(i=0; i<5; i++){
		if( a[i]==0){
			newarray[k]=a[i];
			 k++;
		}
	}
	for(i=0; i<5; i++){
		if(a[i]!=0){
			newarray[k]=a[i]; 
			k++;
		}
}
for(k=0; k<5; k++){
	printf("%d", newarray[k]);
}
}


//Que no.3
#include <stdio.h>
void main(){
	int i,a[5]={5,2,1,4,3};
	int newarray[5], k=0;
	printf("Enter array elements:");
	 
	for(i=0; i<5; i++){
		if( a[i]%2==0){
			newarray[k]=a[i];
			 k++;
		}
	}
	for(i=0; i<5; i++){
		if(a[i]%2!=0){
			newarray[k]=a[i]; 
			k++;
		}
}
for(k=0; k<5; k++){
	printf("%d", newarray[k]);
}
}


// Que no.4
#include <stdio.h>
void main(){
	int i,a[3]={3,1,2}, temp;
	printf("Enter array elements:");
	 
	for(i=0; i<3; i++){
	for(j=i+1; j<3; j++)
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
}
for(i=0; i<3; i++){
	printf("%d",a[i]);
}
}
	 
// Que no.6
#include <stdio.h>
void main(){
	int i,a[5]={1,4,6,8,7,5};

	for(i=4; i>=0; i--){

	printf("%d",a[i]);
}
}
	 
//Que no.7
#include <stdio.h>
void main(){
	int i,a[5]={1,4,6,8,7},sum=0;

	for(i=4; i>=0; i--){
	sum=sum+a[i];
}
printf("sum=%d",sum);
}
	 

// Que no.9
#include <stdio.h>
void main(){
	int i,a[3]={1,4,7}, max=a[0];
	 
	for(i=0; i<3; i++){
		if(a[i]>max)
		{
			max=a[i];
		}

}
	printf("Maximum value is %d", max);
}
	 
// Que no. 10
#include <stdio.h>
void main(){
	int i,a[3]={4,7,5,9}, min=a[0];

	for(i=0; i<3; i++){
		if(a[i]<min)
		{
			min=a[i];
		}

}
	printf("Minimum value is %d", min);
}
	 
	 
	 