#include <stdio.h>
void main(){
    int DayNumber;
printf("enter 1,2,3,4,5,6 OR 7 = ");
scanf("%d", & DayNumber);
switch(DayNumber){
case 1:
    printf("Sunday");
    break;
case 2:
    printf("Monday");
    break;
case 3:
    printf("Tuesday");
    break;
case 4:
    printf("Wednesday");
    break;
case 5:
    printf("Thursday");
    break;
case 6:
    printf("Friday");
    break;
case 7:
    printf("Saturday");
    break;
Default:
    printf("Invalid brake;choice");

}
}