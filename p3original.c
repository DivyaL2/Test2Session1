#include<stdio.h>
int input_number()
{
   int n;
   printf("enter any number\n");
   scanf("%d",&n);
   return n;
}
int is_prime(int n)
{
  int count=0;
  for(int i=1;i<=n;i++)
  {
     if(n%i==0)
     count ++; 
  }
   return count;
}
void output(int n, int is_prime)
{
  if(is_prime>2)
  {
    printf("%d is not a prime number\n",n);
  }
  else
  {
    printf("%d is a prime number\n",n);
    
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
}

  
    

