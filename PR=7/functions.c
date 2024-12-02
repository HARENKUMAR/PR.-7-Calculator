#include<stdio.h>


float addition();
float subtraction();
float multiplication();
float division();
int modulus();



float addition()
{
	float a;
	float b ;
	printf("Enter a First number : ");
	scanf("%f",&a);
	printf("Enter a second number : ");
	scanf("%f",&b);
	return a+b;
	
}

float subtraction() 
{
    float a;
	float b;
    printf("Enter a First number : ");
	scanf("%f",&a);
	printf("Enter a second number : ");
	scanf("%f",&b);

    return a - b;
}

float multiplication() 
{
    float a;
	float b;
    printf("Enter a First number : ");
	scanf("%f",&a);
	printf("Enter a second number : ");
	scanf("%f",&b);
   
    return a * b;
}

float division() 
{
    float a;
	float b;
    printf("Enter a First number : ");
	scanf("%f",&a);
	printf("Enter a second number : ");
	scanf("%f",&b);
    
	return a / b;
}

int modulus() 
{
    int a;
	int b;
    printf("Enter a First number : ");
	scanf("%d",&a);
	printf("Enter a second number : ");
	scanf("%d",&b);
    
    return a % b;
}
