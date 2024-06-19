#include<stdio.h>
void main()
{
   char t;
   char *p1="comp",*p2;
   p2=p1;
   p1="key";
       printf("%s,%s",p1,p2);
}