#include<stdio.h> 
#include<string.h>
void *string();
int len1,len2,n,i,j,m;
char str[90],sub_str[89],s1[89];
void main()
{
char str[90],sub_str[89],s1[100];
int len1,len2,n,i,j;
printf("enter the string:\n");
gets(str);
printf("enter the substring:\n");
gets(sub_str);
len1=strlen(str);
len2=strlen(sub_str);
printf("enter the number from where sub string should be:\n");
scanf("%d",&n);
string(str,sub_str);
for(i=n+1,m=0;i<len1;i++,m++)
{
s1[m]=str[i];
}
s1[m]='\0';
for(j=n+1;str[i]!='\0';j++)
{
str[len1+len2-n+2]=str[j];
}
printf("%s",strcat(str,s1));
}
void *string()
{
for(i=n;i<len1+len2;i++)
{
str[i+1]=sub_str[i-n];
}
}
