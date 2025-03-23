
# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	int num2 = num; 

	int pow = 0;
	printf("Enter the power of two: ");
	scanf("%d", &pow);
	
	num = num << pow;
	printf("Result is: %d \n", num);

	num = num2;
	num = num >> pow;
	printf("Result is: %d \n", num);
}
