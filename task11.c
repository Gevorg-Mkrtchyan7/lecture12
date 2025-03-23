# include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);

	int mask = 0;
	printf("Enter the mask: ");
	scanf("%d", &mask);

	int n = 0;
	printf("Enter the n: ");
	scanf("%d", &n);

	int res = (mask << n) & num;
	printf("The result is: %d \n", res);

}
