#include <stdio.h>
int main()
{
float hra_percentage, da_percentage, ta_percentage;
float base,hra,da,ta,grosssalary;

printf("Enter the base salary: ");
scanf("%f", &base);

printf("Enter the HRA percentage: ");
scanf("%f",&hra_percentage);

printf("Enter the DA percentage: ");
scanf("%f",&da_percentage);

printf("Enter the TA percentage: ");
scanf("%f",&ta_percentage);

hra =base * (hra_percentage/100);
da =base * (da_percentage/100);
ta =base * (ta_percentage/100);

grosssalary = base + hra + da + ta;
printf("\nThe gross salary is: %0.2f\n\n", grosssalary);

    return 0;
}