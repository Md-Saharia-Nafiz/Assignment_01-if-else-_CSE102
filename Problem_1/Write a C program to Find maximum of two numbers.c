#include <stdio.h>

int main ()


{
    int num1, num2;

    scanf ("%d %d",&num1, &num2);
    printf("Enter two numbers = ");


    if(num1>num2)

    {
        printf("%d is maximum", num1);
    }

    else if(num2>num1)

    {
        printf("%d is maximum", num2);
    }

    else if (num1 == num2)

    {
        printf("Both are equal");

    }
    return 0 ;

}
