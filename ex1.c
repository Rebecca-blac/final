#include<stdio.h>
#include<stdio.h>
main(){
    double a;
    double b;
    double c;
    printf("please input two numbers(divided by space)\n");
    scanf("%lf %lf",&a,&b);
    c=(a+b)*(a+b);
    printf("%.2lf\n",c);
}

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
