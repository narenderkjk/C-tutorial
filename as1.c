#include<stdio.h> 
#include<string.h>
int main()
{
char str[30];
printf("Enter a string : ");
gets(str);
int n1,n2,n3;
printf("Enter three numbers :");
scanf("%d%d%d",&n1,&n2,&n3);
int n = strlen(str);
for(int i=n;i>=n1;i--)
{
str[i+1]=str[i];
}
str[n1]=';';
for(int i=n+1;i>=n2+n1+1;i--)
{
str[i+1]=str[i];
}
str[n2+n1+1]=';';
for(int i=n+2;i>=n3+n2+n1+2;i--)
{
str[i+1]=str[i];
}
str[n3+n2+n1+2]=';';
puts(str);
return 0;
}