#include<stdio.h>
void main()
{
    int a=0,b=1,c,n,i;
    printf("enter the limit ");
    scanf("%d",&n);
    printf("%d  %d\t",a,b);
    for(i=0;i<n-2;i++){
     c=a+b;
     printf("%d\t",c);
     a=b;
     b=c;
    }
}