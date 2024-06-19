#include <stdio.h> 
#pragma pack(1)
void *occurence();
char str[89];
int i,j,count;
int main()
{
char *str;
occurence(str);
}
void *occurence()
{
printf("enter the string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
count=1;
for(j=i+1;str[j]!='\0';j++)
{
if(str[i]==str[j])
{
count=count+1;
str[j]='n';
}
}
if(str[i]!='n')
{
printf("%c occcured %d times\n",str[i],count);
}
}
}