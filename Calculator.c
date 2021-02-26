#include <stdio.h>
main()
{
	int a1, a2, op;
	
	printf("\t\t\t\t\t\t BASIC CALCULATOR \n\n");
	
	printf("(1). Addition \n");
	printf("(2). Subtraction \n");
	printf("(3). Multiplication \n");
	printf("(4). Divition \n");
	printf("(5). Modulus \n");
	
	printf("\nSelect Operation: ");
	scanf("%d", &op);
	
	printf("\nEnter First Number: ");
	scanf("%d", &a1);
	
	printf("Enter Second Number: ");
	scanf("%d", &a2);
	
	switch (op)
	
	{

	case 1: printf("\nAddition is %d", a1+a2);
	break;
	
	case 2: printf("\nSubtraction is %d", a1-a2);
	break;
	
	case 3: printf("\nMultiplication is %d", a1*a2);
	break;
	
	case 4: printf("\nDivition is %d", a1/a2);
	break;
	
	case 5: printf("\nModulus is %d", a1%a2);
	break;
	
    }
    
	
}
	
