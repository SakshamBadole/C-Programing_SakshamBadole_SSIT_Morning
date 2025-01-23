// store student information
#include <stdio.h>
struct student {
	char name[20];
	int rollno;
	int marks;
};
void main (){
	struct student s1;
	
	printf("enter details\n");
	printf("enter name:");
	scanf("%s",s1.name);
	printf("enter roll no:");
	scanf("%d",&s1.rollno);
	printf("enter marks:");
	scanf("%d",&s1.marks);
printf("display student information\n");
printf("name:%s\n",s1.name);
printf("roll no:%d\n",s1.rollno);
printf("marks:%d\n",s1.marks);
}


// Que no 1 Define a structure to store student details (name, age, and marks), take input from the user, and display the details.
#include <stdio.h>
struct student {
	char name[20];
	int age;
	int marks;
};
void main (){
	int i;
	struct student S[3];
	printf("enter information of student\n");
for(i=0; i<3; i++){
	printf("enter name of student %d:",i+1);
	scanf("%s",S[i].name);
	printf("enter age of student %d:",i+1);
	scanf("%d",&S[i].age);
	printf("enter marks of student %d:",i+1);
	scanf("%d",&S[i].marks);
}	
printf("desplay structure information:\n");
for(i=0; i<3; i++){
	printf("name:%s\n",S[i].name);
	printf("age:%d\n",S[i].age);
	printf("marks:%d\n",S[i].marks);
}
	

}


//Create a structure to store an employee's ID, name, and salary, and write a program to print the details
#include <stdio.h>
struct employe {
	char name[20];
	int employeID;
	int salary;
};
void main (){
	int i;
	struct employe S[3];
	printf("enter information of employe\n");
for(i=0; i<3; i++){
	printf("enter name of employe %d:",i+1);
	scanf("%s",S[i].name);
	printf("enter ID of employe %d:",i+1);
	scanf("%d",&S[i].employeID);
	printf("enter salary of employe %d:",i+1);
	scanf("%d",&S[i].salary);
}
printf("desplay structure information:\n");
for(i=0; i<3; i++){
	printf("name:%s\n",S[i].name);
	printf("employeID:%d\n",S[i].employeID);
	printf("salary:%d\n",S[i].salary);
}
}
	
//Create an array of structures to store information of 5 books (title, author, price) and display them.
#include <stdio.h>
struct books {
	char titlename[20];
	char auther[20];
	int price;
};
void main (){
	int i;
	struct books S[5];
	printf("enter information of books\n");
for(i=0; i<5; i++){
	printf("enter title name of book %d:",i+1);
	scanf("%s",S[i].titlename);
	printf("enter auther name %d:",i+1);
	scanf("%s",S[i].auther);
	printf("enter price of book %d:",i+1);
	scanf("%d",&S[i].price);
}
printf("desplay structure information of book:\n");
for(i=0; i<5; i++){
	printf("titlename:%s\n",S[i].titlename);
	printf("auther:%s\n",S[i].auther);
	printf("price:%d\n",S[i].price);
}
}
	