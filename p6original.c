#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string\n");
  scanf("%s",a);
}



char string_ncmp(char *s1,char *s2)
{  
  
  for(int i=0;s1[i]==s2[i] && s1[i]!='\0';i++)
  {
   if(s1[i]!=s2[i])
     return 1;
  }
  
 }  


char string_index(char *s, char *subs)
{
  int l1=strlen(s);
  int l2=strlen(subs);
  if (l1 < l2)
      return -1;
  for(int i=0;i<l1-l2;i++)
    if (string_ncmp(s,subs))
      return i;
    return -1;
}
void output(char *substring, char *string, int index)
{  
  if(index)
  printf("the index of %s in %s is %d ",substring,string,index);
  else
    printf("substring does not exist");
}
int main()
{
  char a[10],b[10];
  int c;
  input_string(a);
  input_string(b);
  string_ncmp(a,b);
  c=string_index(a,b);
  output(b,a,c);
  return 0;
}
