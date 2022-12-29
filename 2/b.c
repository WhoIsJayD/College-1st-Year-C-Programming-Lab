#include <stdio.h>

int main(void)
{
    int basic, da, hra, medical, gross, pf, insurance, deduction, net;
    printf("Enter basic salary: ");
    scanf("%d", &basic);
    da = basic * 0.5;
    hra = basic * 0.1;
    medical = basic * 0.04;
    gross = basic + da + hra + medical;
    pf = gross * 0.05;
    insurance = gross * 0.07;
    deduction = pf + insurance;
    net = gross - deduction;
    printf("Gross salary: %d\n", gross);
    printf("Deduction: %d\n", deduction);
    printf("Net salary: %d\n", net);

    return 0;
}
