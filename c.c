#include<stdio.h>
#include<string.h>
int main(void)
{
  int n,i,vowels=0,cons=0;
  printf("enter the size of string:");
  scanf("%d",&n);
    char a[n];
    printf("enter string:");
  scanf("%s",&a);
  int spl=n;
  
  for(i=0;i<n;i++)
  {
    if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'){
      vowels++;
    }
    if((a[i]<=122 && a[i]>=97)||(a[i]<=90 && a[i]>=65)){
      cons++;
    }
  }
  
  printf("vowels :%d\nconsonats :%d\nspecials(including spaces,numbers) :%d",vowels,cons-vowels,spl-cons);
}