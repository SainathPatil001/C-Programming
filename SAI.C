#include<stdio.h>
#include<conio.h>
void main()
{  char d;
int a,b,c;
e:

  clrscr();
  printf("\nEnter numbers:");
  scanf("\n%d%d",&a,&b);
  c=a+b;
  printf("\nThe sum is %d",c);
  printf("\nTo continue Press Y");
  printf("\nTo exit Press N\n");
  scanf("%s",&d);
  if(d=='y'||d=='Y')
  {
   goto e;
   }
  getch();
}

