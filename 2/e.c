#include <stdio.h>
#include <math.h>
int main(void)
{
    int area, rounds;
    float radius, distance;
    printf("Enter area of the ground (in sqmtr): ");
    scanf("%d", &area);
    printf("Enter number of rounds: ");
    scanf("%d", &rounds);
    radius = sqrt(area / M_PI);
    distance = 2 * M_PI * radius * rounds;
    printf("Distance covered: %.2f kilometres\n", distance / 1000);

    return 0;
}
