#include<stdio.h>
int main()
{
    int n, sum = 0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}