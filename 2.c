//write a c program to convert first character of all words to upper case and rest to the lower case  
#include <stdio.h>
#include <string.h>

int main()
{
 char str1[40], str2[40];
 int d;

 printf("Enter first string:\n");
 gets(str1);
 printf("Enter second string:\n");
 gets(str2);

 d = strcmp(str1, str2);

 if(d==0)
 {
  printf("Given strings are same.");
 }
 else
 {
  printf("Given strings are different.");
 }

 return 0;
}

// Function Definition /
int mystrcmp(char str1[40], char str2[40])
{
 int d,i, len1=0, len2=0, flag=0;
 // Finding length of first string 
 
 for(i=0; str1[i]!='\0'; i++)
 {
  len1++;
 }
 
 /* Finding length of first string */
 for(i=0; str2[i]!='\0'; i++)
 {
  len2++;
 }
 if(len1!=len2)
 {
  return(1);
 }
}