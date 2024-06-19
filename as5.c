#include<stdio.h> 
#include<string.h>
int main()
{
char str[20],sub[10],str1[10];
printf("Enter a string : ");
gets(str);
printf("Enter the substring : ");
gets(sub);
int c;
int n = strlen(str);
int n2 = strlen(sub);
for(int i=0;i<n;i++)
{
if(str[i]==sub[0])
{
c=0;
for(int j=i;j<i+n2;j++)
{
str1[c]=str[j];
c++;
}
str1[c]='\0';
if(strcmp(sub,str1)==0)
{
printf("The substring is present from %d",i);
}
}
}
if(strcmp(sub,str1)!=0)
printf("The substring is not present");
return 0;
}