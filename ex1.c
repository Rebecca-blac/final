#include<stdio.h>

int s(int n)
  {
if(n==0)
   return 0;
else
{
 printf("%d",(n-1)*s(n-1));
return n;
}
}
void main()
 {
int a;
scanf("%d",&a);
s(a);
 }
