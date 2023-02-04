#include <stdio.h>

void main()
{
    int a,b,c;
    c=1;
    printf("\nPlease Enter the no.: ");
    scanf("%d",&b);
   if (b<0)
   {
       printf("\n Factorial of a negative number does'nt exist.");
   }
   else {
       for (a=1; a<=b; ++a)
       {
           c *= a;
       }
   }
    printf("\n Factorial of %d is %d",b,c);
}


