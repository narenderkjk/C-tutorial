#include<stdio.h>
#include<string.h>
int check(char*,int,char*,int,int);
int main(void)
{
  int n;
  printf("enter the size of string:");
  scanf("%d",&n);
    char a[n];
    printf("enter string:");
  scanf("%s",&a);
  
  int n1;
  printf("enter the size of substring:");
  scanf("%d",&n1);
    char b[n1];
    printf("enter string:");
  scanf("%s",&b);
  int i,index=-1;
  for(i=0;i<n;i++){
    if(check(a,n,b,n1,i)==1){
      index=i;
    }
  }
  if(index>=0){
    printf("\nsubstring found at index %d\n",index);
  }
  else{
    return 0;
  }
  
  printf("enter size of string to be replaced.(should <= %d) :",n1);
  int n2;
  scanf("%d",&n2);
  char c[n2];
  if(n2>n1){
    printf("index overflow error");
    return 0;
  }
  printf("enter string to be replaced: ");
  scanf("%s",&c);
  int k;
  for(k=0;k<n2;k++){
    a[(index+k)]=c[k];
  }
  printf("\nReplaced string is:\n%s",a);
  
  
}
//functions
int check(char *a,int n,char *b,int n1,int ix)
{

  int i,ctr=0;
//  printf("\ncurrent index is %d   %d\n",ix,n-n1);
  for(i=0;i<n1;i++){
    //printf("#  ");
    if(a[i+ix]==b[i]){
      //printf("--%c  %d \n",a[i+ix],ctr);
      ctr++;
    
    }
  }
  if(ctr==n1){
    return 1;
  }
  else{
    return 0;
  }
    
}