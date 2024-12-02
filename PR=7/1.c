#include<stdio.h>
#include"functions.c"


int main()
{
	
	int choice;
	char continueChoice = 'Y';

    while (continueChoice == 'Y' || continueChoice == 'y')
    {
	
	printf("****************\n");
	printf("___CALCULATOR___\n");
	printf("****************\n");
	
	
	printf("\n===== Arithmetic Operations Menu =====\n");
	printf("press 1 for (+)\n");
	printf("press 2 for (-)\n");
	printf("press 3 for (*)\n");
	printf("press 4 for (/)\n");
	printf("press 5 for (%%) \n\n");
	printf("Enter your choise :- ");
	scanf("%d", &choice);
	
	
    switch (choice) 
   {
        case 1:
        	
                printf("\nYou chose Addition.\n\n");
                printf("Result: %.2f\n", addition());
                break;

        case 2:
        	
                printf("\nYou chose Subtraction.\n\n");
                printf("Result: %.2f\n", subtraction());
                break;

        case 3:
        	
                printf("\nYou chose Multiplication.\n\n");
                printf("Result: %.2f\n", multiplication());
                break;

        case 4:
        	
                printf("\nYou chose Division.\n\n");
                printf("Result: %.2f\n", division());
                break;

        case 5:
        	
                printf("\nYou chose Modulus.\n\n");
                printf("Result: %d\n", modulus());
                break;
                
        default:
        	
                printf("Invalid choice! Please try again.\n");
                
	}
	
	printf("\nDo you want to perform another operation? (Y/N): ");
    getchar();
    scanf("%c", &continueChoice);
    }

    printf("\n_______THANK YOU_______\n");
    
}