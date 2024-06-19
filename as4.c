#include <stdio.h> 
#include<string.h>
int main()
{
int i,count=0,mount=0,tount=0;
char str[30];
printf("enter the string:");
gets(str);
int len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' ||
str[i]=='I' || str[i]=='O' || str[i]=='U')
{
count=count+1;
printf("count=%d\n",count);
}
else if(!((str[i]>=65 && str[i]<=90) || (str[i]<=122 && str[i]>=95)))
{
tount=tount+1;
printf("tount=%d\n",tount);
}
else
{
mount=mount+1;
}
}
printf("no of vowels=%d",count);
printf("\nno of consonents=%d",mount);
printf("\nother than vowels and consonents=%d",tount);
return 0;
}