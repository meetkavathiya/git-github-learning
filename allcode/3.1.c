//THIS PROGRAM IS PREPARED BY 22CE051_MEET
#include<stdio.h>
#include<math.h>
#define pi 3.14

void main()
{
    float Gravity,Length=50,Time_period;
    printf("Enter Length=%.2f",Length);
    printf("\nEnter Gravity=");
    scanf("%f",&Gravity);
    Time_period=2*pi*sqrt(Length/Gravity);
    printf("Time Period=%.2f",Time_period);
    printf("\n\nTHIS PROGRAM IS PREPARED BY 22CE051_MEET");

}
