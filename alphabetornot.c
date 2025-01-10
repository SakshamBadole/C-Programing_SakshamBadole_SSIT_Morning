#include <stdio.h>
void main() {
     char ch;
    printf("Enter Character: ");
    scanf("%c",& ch);
     if (ch>='A' && ch<='Z') {
        printf("%c is alphabet",ch);
     }
    else if (ch>='a' && ch<='z') {
        printf("%c is  alphabet",ch);
    }
    else {
        printf("%c is not alphabet",ch);
    }

}