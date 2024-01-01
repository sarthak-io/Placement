#include<stdio.h>

int main()
{
   int m=0,n,i;
   printf("enter number:");
   scanf("%d\n",&n);
   while(n!=0){
      n=n>>1;
      m=m|1;
      m=m<<1;
}
   i= ~n &m;
   printf("%d",m);
   printf("%d",n);
   printf("%d",i);


}