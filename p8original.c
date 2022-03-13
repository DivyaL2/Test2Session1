char string_ncmp(char *s1,char *s2)
{
  for(int i=0;s1[i]==s2[i] && s1[i]!='\0';i++)
   return s1[i] - s2[i];
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