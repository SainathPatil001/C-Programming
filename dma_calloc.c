#include<stdio.h>
#include<stdlib.h>


int main()
{

    int *ptr;
    int n;

    printf("Enter the Size of array: \n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
       printf("Enter the %d Element: \n",i);
      scanf("%d",&ptr[i]);

    }

     for(int i=0;i<n;i++)
    {

      printf("The Element in array are %d\n",ptr[i]);

    }




return 0;
}
