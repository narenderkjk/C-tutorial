#include<stdio.h> 
#include<string.h>
void check(float);
void *string();
int flag,slag,clag,tlag,n,i;
char str[89];
float num;
int main()
{
int flag,slag,clag,tlag,num,a,n,i;
char str[89];
printf("whether it is the string or number:\n");//if it is string enter 1 otherwise 0
scanf("%d",&n);
if(n==1)
{
check(a);
}
else
{
string(str);
}
}
void check(float num)
{
printf("enter the number:\n");
scanf("%f",&num);
if((num-(int)num)==0)
{
printf("entered number is int type\n");
}
else
{
printf("entered number is float type\n");
}
}
void *string()
{
printf("enter the string:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>='a' && str[i]<='z') || (str[i]<='Z' && str[i]>='A') || str[i]==' ')
{
flag=1;
}
if(str[i]==' ' || (str[i]<=9 && str[i]>=0))
{
slag=1;
}
if(str[i]=='e' || str[i]==' ')
{
tlag=1;
}
}
if(flag==1 || slag==1 || tlag==1)
{
printf("entered string is alphanumeric\n");
}
if(tlag==1 || slag==1)
{
printf("entered string is exponent\n");
}
}