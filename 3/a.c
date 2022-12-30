#include <math.h>
#include <stdio.h>
int main()
{
    int a, b, c, d, one_value, second_value;
    printf("Please specify the value of A :");
    scanf("%d", &a);
    printf("Please specify the value of B :");
    scanf("%d", &b);
    printf("Please specify the value of C :");
    scanf("%d", &c);
    printf("Quadratic equation is : %d X^2 + %dX + %d\n", a, b, c);
    d = ((b * b) - 4 * a * c);
    one_value = ((-b) + sqrt('d')) / 2 * a;
    second_value = ((-b) - sqrt('d')) / 2 * a;
    printf("The two roots of this equation are \n1. %d\n2. %d", one_value,
           second_value);
}
