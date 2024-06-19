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
  
/*  int i,j,ctr=0,ind=-1;  
  for(i=0;i<(n-n1+1);i++){
    for(j=0;j<n1;j++){
      if(a[i+j]==b[j]){
        ind=i+j;
        if(a[i+j]!=b[j+1]){
          ind=-1;
          continue;
        }
        ctr++;
        printf("--%c >>%c\n",a[i+j-1],b[j]);   
        printf("--%d",i+j-1);
      }
    }
  }
  if(ctr==n1){
    printf("%d found at position %d ",ctr,ind);
  }*/
  int i,index=-1;
  for(i=0;i<n;i++){
    if(check(a,n,b,n1,i)==1){
      index=i;
    }
  }
  if(index>=0){
    printf("\nsubstring found at index %d",index);
  }
}

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