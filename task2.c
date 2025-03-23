# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);

	int n = 1;
	num = num << n;
	printf("Result is: %d \n", num);
}
