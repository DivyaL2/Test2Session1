#include<stdio.h>
int input()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{  
   if(n==0 || n==1)
     return n;
   else
     return find_fibo(n-1)+find_fibo(n-2);

} 
void output(int n, int fibo)
{
  printf("%d is the nth number of %d fibonaacci series\n",fibo,n);
  
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}

  
