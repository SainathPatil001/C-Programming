#include<stdio.h>
void main()
{    



  int no,a,b;
  int output;
  printf("\nEnter two numbers: ");
  scanf("%d%d",&a,&b);
  printf("Which opration do you want to perform \n1-Addtion \n2-Multiplication \n3-division \n4-Subtraction\n");
  printf("Enter Your choice:\n");
  scanf("%d",&no);
  switch(no)
{
  case 1: output=a+b;
          printf("The Sum of number is %d",output);
          break;
   
  case 2: output=a*b;
          printf("The multiplication of number is %d",output);
          break;
  

  case 3: output=a/b;
          printf("The division of number is %d",output);
          break;


 case 4: output=a-b;
         printf("The subtraction of number is %d",output);
         break;
      


 default: printf("The value you entered is Invalid");



 }












}
  
  
 

















