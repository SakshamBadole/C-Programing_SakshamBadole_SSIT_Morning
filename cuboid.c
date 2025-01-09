#include <stdio.h>
    void main(){
       int a,l,b,h ;
printf ("enter length");
scanf ("%d",&l);
printf ("enter breadth");
scanf ("%d",&b);
printf ("enter height");
scanf ("%d",&h);
a=2*(l*b+b*h+h*l);
printf ("cuboid is %d",a);

}