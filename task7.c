# include <stdio.h>

int main()
{
	int num1 = 0;
	printf("Enter the first number: ");
	scanf("%d", &num1);

	int num2 = 0;
	printf("Enter the second number: ");
	scanf("%d", &num2);
	int a = num1;
	int b = num2;

	if(num1 < num2){
		num1 = a | b;
		num2 = a & b;
	}else{
	 	num1 = a & b;
		num2 = a | b;	
	}

	printf("The first number is: %d \n", num1);
	printf("The second number is: %d \n", num2);
}
