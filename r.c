#include<stdio.h>
#include<string.h>

int main() {
  int n,i;
  char p[20],q[20],r[20],s[20];
  gets(p);
  gets(q);
  gets(r);
  n=strlen(p);
  for(i=0;i<n;i++)
  {
      if(p[i]==q[i])
      {
        q[i]=p[i];
      }else
      {
          break;
      }
  }for(i=0;i<n;i++)
  {
      if(r[i]==s[i])
      {
          printf("%c",r[i]);
      }else
      {
          break;
      }
  }
    
}
