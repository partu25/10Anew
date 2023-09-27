#include<stdio.h>
void main()
{
  int s,e;
  printf("Enter the starting value:");
  scanf("%d",&s);
  printf("Enter the ending value:");
  scanf("%d",&e);
  while(s<=e)
  {
    printf("\n%d",s);
    s++;
  }
  
}
