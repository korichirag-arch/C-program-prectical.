#include <stdio.h>
int main()
{
 float celsius, fahrenheit;
 printf("The temperature in celsius: ");
 scanf("%f",&celsius);
 fahrenheit = (celsius * 9/5) + 32;
 printf("The Temperature in fahrenheit: %f\n", fahrenheit);


    return 0;

}