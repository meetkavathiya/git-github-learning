//This program is prepared by 22CE051_MEET
#include<stdio.h>
#include<conio.h>
void main()
{
float Basic_salary,DA,HRA,MA,TA,PF,IT,Groce_salary,Net_salary,Allownaces,Deduction;

	printf("Sr.No.  Input/Outputs\t\tAmount\n\n");
	printf("1\tEnter the basic salary  ");
	scanf("%f:",&Basic_salary);
	//Allownace
	DA=Basic_salary*0.7;
	printf("2\tDA of Basic Salary\t%f\n",DA);
	HRA=Basic_salary*0.07;
	printf("3\tHRA of Basic Salary\t%f\n",HRA);
	MA=Basic_salary*0.02;
	printf("4\tMA of Basic Salary\t%f\n",MA);
	TA=Basic_salary*0.04;
	printf("5\tTA of Basic Salary\t%f\n",TA);
	//Deduction
	PF=Basic_salary*0.12;
	printf("6\tPF of Basic Salary\t%f\n",PF);
	IT=300;
	printf("7\tIT of Basic Salary\t%f\n",IT);
	Allownaces=DA+HRA+MA+TA;
	Groce_salary=Basic_salary+Allownaces;
	printf("8\tGroce Salary\t\t%f\n",Groce_salary);
	Deduction=IT+PF;
	Net_salary=Groce_salary-Deduction;
	printf("9\tNet Salary \t\t%f\n",Net_salary);
	printf("This programe is prepared by 22CE051_MEET");




}

