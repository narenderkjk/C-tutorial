#include<stdio.h>
void main()
{
    int n,c,s=0,d;
    printf("enter the number: ");
    scanf("%d",&n);
    c=n;
    while(c>0){
        d=c%10;
        s+=d*d*d;
        c/=10;
    }
    if(s=n){
        printf("%d is armstrong number",n);
    }
    else({
        printf("%d is not an armstrong number");
    }
}