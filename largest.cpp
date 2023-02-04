#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second value: ");
    scanf("%d",&b);
    printf("Enter the third value: ");
    scanf("%d",&c);
    if (a>=b && b>=c)
    {
        printf("%d is the largest number.",a);
    }
    if (b>=a && a>=c)
    {
        printf("%d is the largest number.",b);
    }
    if (c>=b && b>=a)
    {
        printf("%d is the largest number.",c);
    }
    

    return 0;
}

