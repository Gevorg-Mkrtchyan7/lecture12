# include <stdio.h>

int main()
{
	int num1 = 0;
	printf("Enter the first number: ");
	scanf("%d", &num1);

	char b_op = 0;
	printf("Enter the bitwise operation: ");
	scanf(" %c", &b_op);

	int num2 = 0;
	printf("Enter the second number: ");
	scanf("%d", &num2);

	switch(b_op)
	{
		case '&':
			printf("The result is %d \n", (num1 & num2));
			break;
		case '|':
			printf("The result is %d \n", (num1 | num2));
			break;
		case '^':
			printf("The result is %d \n", (num1 ^ num2));
			break;
		default:
			printf("Enter '&' or '|' or '^' \n");
	}
}
