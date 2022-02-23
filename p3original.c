#include<stdio.h>
int input_number()
{
   int n;
   printf("enter any number\n");
   scanf("%d",&n);
   return n;
}
int is_prime(int n);
{
  int count=0;
  for(int i=0;i<n;i++)
  {
     if(n%2==0)
     count ++; 
  }
}
return count;
void output(int n, int count)
{
  if(count<2)
  {
    printf("%d is a prime number\n",n);
  }
  else
  {
    printf("%d is not a prime number\n",n);
    
  }
}

  
    

