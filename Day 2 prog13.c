/* Gross Salary Calculator */
#include<stdio.h>
int main()
{
    float bs, hra, da, gross_salary;
    printf("Enter basic salary: ");
    scanf("%f", &bs);
    hra = bs * 0.1; //  HRA is 10% of basic salary
    da = bs * 0.05; //  DA is 5% of basic salary
    gross_salary = bs + hra + da;
    printf("Gross Salary: %.2f\n", gross_salary);
    return 0;
}