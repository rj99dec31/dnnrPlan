#include <stdio.h> 
int main()
{
  int i, j, n, k;
  printf("enter the number: ");
  scanf("%d",&n);
  for(i=0;i<n;++i)
  {
    for(j=0;j<=i;++j)
    {
      printf("01");
    }
    for(k=0;k<=1;++k)
    {
     printf("\n");
    }
  }
  return 0;
}
