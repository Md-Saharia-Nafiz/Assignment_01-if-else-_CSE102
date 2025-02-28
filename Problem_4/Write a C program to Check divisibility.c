#include <stdio.h>

int main ()

{
    int num;

    scanf("%d",&num);
    printf("Enter any number = ");


    if((num%5 == 0 ) && (num%11 == 0))
    {
        printf("Number is divisivle by 5 and 11");
    }

    else
    {
        printf("Number is not divisivle by 5 and 11");
    }


    return 0;
}

































