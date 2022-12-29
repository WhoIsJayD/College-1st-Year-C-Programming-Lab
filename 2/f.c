#include <stdio.h>

int main()
{
    float price;
    int paise, rupees;
    printf("Enter price: ");
    scanf("%f", &price);
    paise = (int)(price * 100);
    rupees = paise / 100;
    paise = paise % 100;
    printf("Rupees: %d\n", rupees);
    printf("Paise: %d\n", paise);
    return 0;
}
