#include <stdio.h>

int main(void)
{
    float temp_ahmedabad, temp_mumbai, diff;
    printf("Enter temperature in Ahmedabad: ");
    scanf("%f", &temp_ahmedabad);
    printf("Enter temperature in Mumbai: ");
    scanf("%f", &temp_mumbai);
    temp_ahmedabad = (temp_ahmedabad - 32) * (5.0/9.0);
    temp_mumbai = (temp_mumbai - 32) * (5.0/9.0);
    diff = temp_mumbai - temp_ahmedabad;
    printf("Difference between the temperatures of two cities in Celsius: %.2f\n", diff);
    return 0;
}
