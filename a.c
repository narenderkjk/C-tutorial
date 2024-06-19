#include<stdio.h>
int main(void)
{
  int n1;
  printf("enter size:");
  scanf("%d",&n1);
  char a[n1];
  printf("enter number:");
  scanf("%s",&a);
  //char b[3]=".e2"; //e=101  0-48 , 9-57 , .-46
  //printf("%f",(float)b[0]);
  int i,ctr=0;
  for(i=0;i<n1;i++)
  {
    if(((float)a[i]>=48 && (float)a[i]<=57)){
      ctr++;
    }
    else if((float)a[i]==101 || (float)a[i]==46){
      ctr++;
    }
  }
  //printf("\n%d",ctr);
  if(ctr==n1){
    printf("%s is a numeric value",a);
  }
  else{
    printf("%s is not a numeric value",a);
  }
  
}

