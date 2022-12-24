/*This program is prepared by 22CE051*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int Number_1,Number_2;
 printf("Enter the value of Number_1=");
 scanf("%d",&Number_1);
 printf("Enter the value of Number_2=");
 scanf("%d",&Number_2);
 printf("\nSr.no\tInstruction\t\tNumber1\t\tNumber2");
 printf("\n1.\tBefore Swapping\t\t%d\t\t%d",Number_1,Number_2);
Number_1=Number_1+Number_2;
 Number_2=Number_1-Number_2;
 Number_1=Number_1-Number_2;
 printf("\n2.\tAfter Swapping\t\t%d\t\t%d",Number_1,Number_2);
 printf("\n\nThis program is prepared by 22CE051_MEET.");
 return 0;
 }
