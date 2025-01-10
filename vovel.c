#include <stdio.h>
void main() {
     char ch1;
    printf("Enter Character: ");
    scanf("%c",& ch1);
     if (ch1== 'a' | ch1== 'e'| ch1=='i'| ch1=='o'| ch1=='u') {
        printf(" %c is vovel",ch1);
     }
    else {
        printf(" %c is not vovel it's consonent");
    }

}