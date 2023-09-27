#include<stdio.h>
int main()
{
  int i,n=2,a,count=0;
  printf("Enter the number:");
  scanf("%d",&i);
  while(n<i)
  {
    if(i%n==0)
    {
      count++;
    }
    n++;
  }
  if(count==0)
  {
    printf("This number is Prime");
  }
  else
  {
    printf("This number is Not Prime");
  }
  
}
