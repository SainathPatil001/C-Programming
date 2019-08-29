#include<stdio.h>
#include<conio.h>
void main()
{  long int a,i,count=0;
 clrscr();
 printf("Enter a number:");
 scanf("%ld",&a);
 for(i=1;i<=a;i++)
 { if(a%i==0)
   count=count+1;
 }
 if(count==2)
 printf("%ld is a prime number",a);
 else if(a==1)
 printf("1 is never a prime or composite number");
 else
 printf("%ld is not a prime number",a);

getch();










}
