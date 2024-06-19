#include<stdio.h>
#include<string.h>
int main(void)
{
  int n;
  printf("enter the size of string:");
  scanf("%d",&n);
    char a[n];
    printf("enter string:");
  scanf("%s",&a);
    
     char key;
     //printf("enter key:");
  scanf("%c",&key);
  int i,count=0;
  
  printf("enter the character to be found:");
  scanf("%c",&key);
  
  for(i=0;i<n;i++)
  {
    if(a[i]==key){
      count+=1;
    }
  }
  printf("%c occours  %d times",key,count);

}