#include<stdio.h>

void main()
{  
 //fibonacci series//
 int i,j,k,a,b,c;
 printf("Enter the two intial Number: ");
 scanf("%d%d",&a,&b);
 printf("Till how much number do you want to print fibbonaci series???\n");
 scanf("%d",&c);
 printf("\t%d\t%d",a,b);
 for(i=1;i<=c;i++)
 {
  
   k=a+b;
   printf("\t%d",k);
  
   a=b;
   b=k;
   
 }















}
