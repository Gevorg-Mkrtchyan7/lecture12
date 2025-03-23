# include <stdio.h>

int main()
{
	int index = 0;
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the index: ");
	scanf("%d", &index);

	num = num | (1 << index);

	printf("Result is: %d \n", num);	

}
