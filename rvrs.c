#include<stdio.h>
void main() {
    int n,d,r=0;
    printf("enter the number:");
    scanf("%d", &n);
    while(n>0){
     d=n%10;
     r=(r*10)+d;
     n/=10;
    }
    printf("reverse is :%d",r);
}